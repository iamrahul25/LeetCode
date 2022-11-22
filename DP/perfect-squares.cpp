class Solution {
public:
    
    //DP Problem - Time: O(N^2)  Space: O(N^2)
    int numSquares(int n) {
        
        vector<int> arr;

        for(int i=1; i*i<=n; i++){
            arr.push_back(i*i);
        }
        
        int l = arr.size();

        //Initializing DP Matrix
        vector<vector<int>> dp(l+1, vector<int>(n+1));

        for(int i=0; i<=l; i++){
            for(int j=0; j<=n; j++){
                if(j==0) dp[i][j] = 0;
                if(i==0) dp[i][j] = INT_MAX - 1;
            }
        }


        for(int i=1; i<=l; i++){
            for(int j=1; j<=n; j++){
                if(arr[i-1]<=j){
                    dp[i][j] = min(dp[i-1][j], 1 + dp[i][j - arr[i-1]]);
                }
                else{
                    dp[i][j] = dp[i-1][j];
                }
            }
        }

        return dp[l][n];
    }
};
