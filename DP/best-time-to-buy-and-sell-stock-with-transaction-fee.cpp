class Solution {
public:

    //Recursive Code: --- TLE Error! (19/44) Test Case Passed! 
    int maxprofit(vector<int>&arr, int prev, int curr, int type, int fee){
        //Base Case: 
        if(curr==arr.size()) return 0;

        //Previously Selled!   0 - 'Buy'  and   1 - 'Sell'
        if(type==1){
            int buy = maxprofit(arr, curr, curr+1, 0, fee);
            int notbuy = maxprofit(arr, prev, curr+1, type, fee);

            return max(buy, notbuy);
        }

        //Pervioulsy Buyed! 
        else{
            int sell = maxprofit(arr, curr, curr+1, 1, fee) + (arr[curr] - arr[prev] - fee);
            int notsell = maxprofit(arr, prev, curr+1, type, fee);

            return max(sell, notsell);
        }
    }
    

    //Recursion + Memoization --- TLE Error! (34/44) Test Case Passed (3D - DP OR 2D - DP)
    int maxprofit2(vector<int>&arr, int prev, int curr, int type, int fee, vector<vector<vector<int>>>&dp){
        //Base Case: 
        if(curr==arr.size()) return 0;

        if(dp[curr][prev][type]!=-1) return dp[curr][prev][type];

        //Previously Selled!   0 - 'Buy'  and   1 - 'Sell'
        if(type==1){
            int buy = maxprofit2(arr, curr, curr+1, 0, fee, dp);
            int notbuy = maxprofit2(arr, prev, curr+1, type, fee, dp);

            return dp[curr][prev][type] = max(buy, notbuy);
        }

        //Pervioulsy Buyed! 
        else{
            int sell = maxprofit2(arr, curr, curr+1, 1, fee, dp) + (arr[curr] - arr[prev] - fee);
            int notsell = maxprofit2(arr, prev, curr+1, type, fee, dp);

            return dp[curr][prev][type] = max(sell, notsell);
        }
    }

    //Recursive Code: --- TLE Error! 
    int maxprofit3(vector<int>&arr, int n, int type, int fee){
        //Base Case: 
        if(n==arr.size()) return 0;

        //Previously Selled!   0 - 'Buy'  and   1 - 'Sell'
        if(type==1){
            int buy = maxprofit3(arr, n+1, 0, fee) - arr[n];
            int notbuy = maxprofit3(arr, n+1, type, fee);

            return max(buy, notbuy);
        }

        //Pervioulsy Buyed! 
        else{
            int sell = maxprofit3(arr, n+1, 1, fee) + arr[n] - fee;
            int notsell = maxprofit3(arr, n+1, type, fee);

            return max(sell, notsell);
        }
    }

    //Recursive Code + Memoization: --- All Test Case Passed! 
    int maxprofit4(vector<int>&arr, int n, int type, int fee, vector<vector<int>>&dp){
        //Base Case: 
        if(n==arr.size()) return 0;

        if(dp[n][type]!=INT_MIN) return dp[n][type];

        //Previously Selled!   0 - 'Buy'  and   1 - 'Sell'
        if(type==1){
            int buy = maxprofit4(arr, n+1, 0, fee, dp) - arr[n];
            int notbuy = maxprofit4(arr, n+1, type, fee, dp);

            return dp[n][type] = max(buy, notbuy);
        }

        //Pervioulsy Buyed! 
        else{
            int sell = maxprofit4(arr, n+1, 1, fee, dp) + arr[n] - fee;
            int notsell = maxprofit4(arr, n+1, type, fee, dp);

            return dp[n][type] = max(sell, notsell);
        }
    }

    int maxProfit(vector<int>& prices, int fee){

        int n = prices.size();
        // return maxprofit(prices, 0, 0, 1, fee);

        //3D DP Table
        // vector<vector<vector<int>>> dp(n+2, vector<vector<int>>(n+2, vector<int>(3, -1)));
        // return maxprofit2(prices, 0, 0, 1, fee, dp);

        // return maxprofit3(prices, 0, 1, fee);
        vector<vector<int>> dp(n+1, vector<int>(2, INT_MIN));
        return maxprofit4(prices, 0, 1, fee, dp);

        
    }
};
