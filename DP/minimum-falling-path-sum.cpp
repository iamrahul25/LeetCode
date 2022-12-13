class Solution {
public:

    //Recursive Solution --- TLE.   
    int minsum(vector<vector<int>>&matrix, int n, int row, int col){

        //Base Case: 
        if(row==n-1){
            return 0;
        }

        int left = INT_MAX, right = INT_MAX;

        int down = matrix[row+1][col] + minsum(matrix, n, row+1, col);
        if(col-1>=0) left = matrix[row+1][col-1] + minsum(matrix, n, row+1, col-1);
        if(col+1<n) right = matrix[row+1][col+1] + minsum(matrix, n, row+1, col+1);

        return min(down, min(left, right));
    }

    //Recursive + Memoization Solution   
    int minsum2(vector<vector<int>>&matrix, int n, int row, int col, vector<vector<int>>&dp){

        //Base Case: 
        if(row==n-1){
            return 0;
        }

        if(dp[row+1][col]!=-1) return dp[row+1][col];

        int left = INT_MAX, right = INT_MAX;

        int down = matrix[row+1][col] + minsum2(matrix, n, row+1, col, dp);
        if(col-1>=0) left = matrix[row+1][col-1] + minsum2(matrix, n, row+1, col-1, dp);
        if(col+1<n) right = matrix[row+1][col+1] + minsum2(matrix, n, row+1, col+1, dp);

        return dp[row+1][col] = min(down, min(left, right));
    }

    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n = matrix.size();

        int ans = INT_MAX;

        vector<vector<int>> dp(n+2, vector<int>(n+1, -1));

        for(int i=0; i<n; i++){
            int temp = minsum2(matrix, n, -1, i, dp);
            ans = min(ans, temp);
        }

        return ans;
    }
};
