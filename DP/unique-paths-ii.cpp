class Solution {
public: 
    //D.P -> Problem

    //Recursion + Memoization
    int recursion(int i, int j, int row, int col, vector<vector<int>>&grid, vector<vector<int>>&dp){
        //Reached Finish -> Base Case
        if(i==(row-1) and j==(col-1)) return 1;

        //Check DP Table
        if(dp[i][j]!=-1) return dp[i][j];

        int down = 0;
        int right = 0;

        if((i+1<row) && (grid[i+1][j]!=1)) down = recursion(i+1,j,row,col,grid,dp);
        if((j+1<col) && (grid[i][j+1]!=1)) right = recursion(i,j+1,row,col,grid,dp);

        return dp[i][j] = down + right;
    }

    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m = obstacleGrid.size();
        int n = obstacleGrid[0].size();

        //Edge Case:
        if(obstacleGrid[0][0]==1 || obstacleGrid[m-1][n-1]==1) return 0;

        vector<vector<int>> dp(m, vector<int>(n, -1));
        return recursion(0, 0, m, n, obstacleGrid, dp);
    }
};
