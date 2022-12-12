class Solution {
public:

    //Recursive Solution --- TLE
    int coin(vector<int> &arr, int sum, int n){

        if(sum==0) return 0;
        else if(n==0) return INT_MAX-1;

        //Base case: 
        if(sum==0 || n==0) return 0;

        //Can be Picked
        if(sum>=arr[n-1]){
            return min(coin(arr, sum, n-1), 1 + coin(arr, sum - arr[n-1], n));
        }

        //Cannot be Picked
        return coin(arr, sum, n-1);
    }

    //Recursion + Memoization --- Excepted! 
    int coin2(vector<int> &coins, int amount, int n, vector<vector<int>> &dp){
        //Base Case: 
        if(amount == 0) return 0;
        else if(n==0) return INT_MAX-1;

        if(dp[n][amount]!=-1){
            return dp[n][amount];
        }

        if(coins[n-1]<=amount){
            return dp[n][amount] = min(coin2(coins, amount, n-1, dp) , 1 + coin2(coins, amount - coins[n-1], n, dp));
        }
        
        else{
            return dp[n][amount] = coin2(coins, amount, n-1, dp);
        }
    }

    


    int coinChange(vector<int>& coins, int amount) {
        int n = coins.size();
        // int ans = coin(coins, amount,n);

        vector<vector<int>> dp(n+1, vector<int>(amount+1, -1));
        int ans = coin2(coins, amount, n, dp);

        if(ans==INT_MAX-1) return -1;
        return ans;
    }
};
