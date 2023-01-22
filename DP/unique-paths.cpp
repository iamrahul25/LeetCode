class Solution {
public:

    //Approach 2: DP -> Recursion + Memoization
    int dp(int i, int j, int row, int col, vector<vector<int>>&table){

        //Reached Finish -> Base Case
        if(i==(row) and j==(col)) return 1;

        if(table[i-1][j-1]!=-1) return table[i-1][j-1];

        int down = 0;
        int right = 0;
        if(i+1<=row) down = dp(i+1,j,row,col,table);
        if(j+1<=col) right = dp(i,j+1,row,col,table);

        return table[i-1][j-1] = down + right;
    }


    //Approach 1: Recursion -> TLE 
    int recursion(int i, int j, int row, int col){
        //Reached Finish -> Base Case
        if(i==(row) and j==(col)) return 1;

        int down = 0;
        int right = 0;
        if(i+1<=row) down = recursion(i+1,j,row,col);
        if(j+1<=col) right = recursion(i,j+1,row,col);

        return down + right;
    }

    int uniquePaths(int m, int n) {
        // return recursion(1,1,m,n);

        vector<vector<int>> table(m, vector<int>(n, -1));
        return dp(1,1,m,n,table);
    }
};
