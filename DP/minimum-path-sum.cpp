class Solution {
public:

    //D.P -> Problem 

    //Recursion + DP
    int recursion(int i, int j, int m, int n, vector<vector<int>>&grid, vector<vector<int>>&dp) {
        //Base Case: 
        if(i==(m-1) and j==(n-1)) return grid[i][j];

        //Check in DP Table
        if(dp[i][j]!=-1) return dp[i][j];

        if((i+1)<m and (j+1)<n){
            return dp[i][j] = min(grid[i][j] + recursion(i+1,j,m,n,grid,dp), grid[i][j] + recursion(i,j+1,m,n,grid,dp));
        }

        else if((i+1)<m) return dp[i][j] = grid[i][j] + recursion(i+1,j,m,n,grid,dp);
        else if((j+1)<n) return dp[i][j] = grid[i][j] + recursion(i,j+1,m,n,grid,dp);

        return 0;
    }

    //Iterative -> Write Here
    //Iterative Solution + Space Optimization 

    int minPathSum(vector<vector<int>>& grid){

        int m = grid.size();
        int n = grid[0].size();

        vector<vector<int>> dp(m, vector<int>(n, -1));

        return recursion(0, 0, m, n, grid, dp);
    }
};
