class Solution {
public:

    //Recursive Code: --- TLE Error! (208/210) Test Case Passed! 
    int maxprofit(vector<int>&arr, int prev, int curr, int type){
        //Base Case: 
        if(curr>=arr.size()) return 0;

        //Previously Selled!   0 - 'Buy'  and   1 - 'Sell'
        if(type==1){
            int buy = maxprofit(arr, curr, curr+1, 0);
            int notbuy = maxprofit(arr, prev, curr+1, type);

            return max(buy, notbuy);
        }

        //Pervioulsy Buyed! 
        else{
            int sell = maxprofit(arr, curr, curr+2, 1) + (arr[curr] - arr[prev]);
            int notsell = maxprofit(arr, prev, curr+1, type);

            return max(sell, notsell);
        }
    }

    //Recursive Code + Memoization: --- TLE Error! (209/210) Test Case Passed! 
    int maxprofit2(vector<int>&arr, int prev, int curr, int type, vector<vector<vector<int>>>&dp){
        //Base Case: 
        if(curr>=arr.size()) return 0;

        if(dp[prev][curr][type]!=-1) return dp[prev][curr][type];

        //Previously Selled!   0 - 'Buy'  and   1 - 'Sell'
        if(type==1){
            int buy = maxprofit2(arr, curr, curr+1, 0, dp);
            int notbuy = maxprofit2(arr, prev, curr+1, type, dp);

            return dp[prev][curr][type] = max(buy, notbuy);
        }

        //Pervioulsy Buyed! 
        else{
            int sell = maxprofit2(arr, curr, curr+2, 1, dp) + (arr[curr] - arr[prev]);
            int notsell = maxprofit2(arr, prev, curr+1, type, dp);

            return dp[prev][curr][type] = max(sell, notsell);
        }
    }

    //Recursive Code: --- TLE Error! 
    int maxprofit3(vector<int>&arr, int n, int type){
        //Base Case: 
        if(n>=arr.size()) return 0;

        //Previously Selled!   0 - 'Buy'  and   1 - 'Sell'
        if(type==1){
            int buy = maxprofit3(arr, n+1, 0) - arr[n];
            int notbuy = maxprofit3(arr, n+1, type);

            return max(buy, notbuy);
        }

        //Pervioulsy Buyed! 
        else{
            int sell = maxprofit3(arr, n+2, 1) + arr[n];
            int notsell = maxprofit3(arr, n+1, type);

            return max(sell, notsell);
        }
    }

    //Recursive Code + Memoization --- All Test Case Passed!
    int maxprofit4(vector<int>&arr, int n, int type, vector<vector<int>>&dp){
        //Base Case: 
        if(n>=arr.size()) return 0;

        if(dp[n][type]!=INT_MIN) return dp[n][type];

        //Previously Selled!   0 - 'Buy'  and   1 - 'Sell'
        if(type==1){
            int buy = maxprofit4(arr, n+1, 0, dp) - arr[n];
            int notbuy = maxprofit4(arr, n+1, type, dp);

            return dp[n][type] = max(buy, notbuy);
        }

        //Pervioulsy Buyed! 
        else{
            int sell = maxprofit4(arr, n+2, 1, dp) + arr[n];
            int notsell = maxprofit4(arr, n+1, type, dp);

            return dp[n][type] = max(sell, notsell);
        }
    }



    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        // return maxprofit(prices, 0, 0, 1);

        // vector<vector<vector<int>>> dp(n+2, vector<vector<int>>(n+2, vector<int>(2, -1)));
        // return maxprofit2(prices, 0, 0, 1, dp);

        // return maxprofit3(prices, 0, 1);

        vector<vector<int>> dp(n+1, vector<int>(2, INT_MIN));
        return maxprofit4(prices, 0, 1, dp);

    }
};
