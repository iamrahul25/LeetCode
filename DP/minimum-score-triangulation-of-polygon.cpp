class Solution {
public:

    //This Problem is MCM - Matrix Chain Multiplication

    //Approach 1: Recursive Solution --- TLE Error
    int mcm(vector<int> arr, int i, int j){
        //Base Case:
        if(i==j) return 0;

        int mincost = INT_MAX;

        for(int k=i; k<j; k++){
            int cost = mcm(arr,i,k) + mcm(arr,k+1,j) + (arr[i-1]*arr[k]*arr[j]);
            mincost = min(mincost, cost);
        }

        return mincost;
    }

    //Approach 2: Recursion + Memoization  
    int mcm2(vector<int> arr, int i, int j, vector<vector<int>>&dp){
        //Base Case:
        if(i==j) return 0;

        int mincost = INT_MAX;

        if(dp[i][j]!=-1) return dp[i][j];

        for(int k=i; k<j; k++){
            int cost = mcm(arr,i,k) + mcm(arr,k+1,j) + (arr[i-1]*arr[k]*arr[j]);
            mincost = min(mincost, cost);
        }

        return dp[i][j] = mincost;
    }

    //Approach 3: Iterative Way
    int mcm3(vector<int> arr){
        int n = arr.size();

        //Initializing DP Table
        int dp[n][n];
        for(int i=0; i<n; i++){
            dp[i][i] = 0;
        }

        for(int i=n-1; i>=1; i--){
            for(int j=i+1; j<n; j++){
                
                int mincost = INT_MAX;

                for(int k=i; k<j; k++){
                    int cost = dp[i][k] + dp[k+1][j] + (arr[i-1]*arr[k]*arr[j]);
                    mincost = min(mincost, cost);
                }
                dp[i][j] = mincost;
            }
        }

        return dp[1][n-1];
    }


    int minScoreTriangulation(vector<int>& values){
        int n = values.size();

        // vector<vector<int>> dp(n, vector<int>(n, -1));
        // return mcm2(values, 1, n-1, dp);

        return mcm3(values);


    }
};
