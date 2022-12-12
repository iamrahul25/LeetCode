class Solution {
public:

    //Recursive Solution
    bool equal(vector<int>&arr, int n, int sum){
        //Base Case: 
        if(sum==0) return true;
        if(n==0) return false;

        //Can be picked
        if(sum>=arr[n-1]){
            return (equal(arr,n-1,sum), equal(arr,n-1, sum-arr[n-1]));
        }

        //Can't be picked
        return equal(arr,n-1, sum);
    }

    //Recursion + Memoization --- TLE Error!
    bool equal2(vector<int>&arr, int n, int sum, vector<vector<int>>&dp){
        //Base Case: 
        if(sum==0) return true;
        if(n==0) return false;

        if(dp[n][sum]!=-1) dp[n][sum];

        //Can be picked
        if(sum>=arr[n-1]){
            return dp[n][sum] = (equal2(arr,n-1,sum,dp) || equal2(arr,n-1, sum-arr[n-1],dp));
        }

        //Can't be picked
        return dp[n][sum] = equal2(arr,n-1, sum,dp);
    }

    //Tabulation OR Iterative DP (Bottom - Up Approach)
    bool equal3(vector<int>&v, int sum, int n){
        
        vector<vector<int>> dp(n+1, vector<int>(sum+1, -1));

        //Initialisation --- DP Table
        for(int i=0; i<n+1; i++){
            for(int j=0; j<sum+1; j++){
                if(i==0) dp[i][j] = 0;
                if(j==0) dp[i][j] = 1;
            }
        }

        for(int i=1; i<n+1; i++){
            for(int j=1; j<sum+1; j++){
                if(v[i-1]<=j){
                    dp[i][j] = dp[i-1][j - v[i-1]] || dp[i-1][j];
                }
                else{
                    dp[i][j] = dp[i-1][j];
                }
            }
        }

        return dp[n][sum];
    }


    bool canPartition(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        for(auto x: nums) sum+=x;

        if(sum%2!=0) return false;
        // return equal(nums, n, sum);

        sum = sum / 2;
        // vector<vector<int>> dp(n+1, vector<int>(sum+1, -1));
        // return equal2(nums, n, sum, dp);

        return equal3(nums, sum, n);
    }
};
