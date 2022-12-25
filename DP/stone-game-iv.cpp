class Solution {
public:

    //Recursive Solution
    bool solve(int n){
        if(floor(sqrt(n))==ceil(sqrt(n))){
            return 1;
        }

        bool ans = 0;
        for(int i=1; i*i<=n; i++){
            ans = ans || !solve(n-(i*i));
        }

        return ans;
    }

    //Recursion + Memoization
    bool solve2(int n, vector<int>&dp){
        if(floor(sqrt(n))==ceil(sqrt(n))){
            return 1;
        }

        if(dp[n]!=-1) return dp[n];

        bool ans = 0;
        for(int i=1; i*i<=n; i++){
            ans = ans || !solve2(n-(i*i), dp);
        }

        return dp[n] = ans;
    }

    //Interative Solution  --- Time: O(N * sqrt(N))  Space: O(N)
    bool solve3(int n){
        vector<int> dp(n+1, 0);
        dp[1] = 1;

        for(int i=2; i<=n; i++){
            bool ans = 0;
            for(int j=1; j*j<=i; j++){
                ans = ans || !dp[i-(j*j)];
            }
            dp[i] = ans;
        }

        return dp[n];
    }

    bool winnerSquareGame(int n) {
        //Recursive Solution
        // return solve(n);

        //Recursion + Memoization Solution
        // vector<int> dp(n+1, -1);
        // return solve2(n, dp);

        //Iterative Solution
        return solve3(n);
    }
};
