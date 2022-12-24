class Solution {
public:

    int m = 1000000007;

    //Recursive Solution: 

    // int solve(int n, int d){
    //     //Base Case:  
    //     if(d==0) return 1;

    //     if(n==0) return solve(4, d-1) + solve(6, d-1);
    //     else if(n==1) return solve(6, d-1)%m + solve(8, d-1)%m;
    //     else if(n==2) return solve(7, d-1)%m + solve(9, d-1)%m;
    //     else if(n==3) return solve(4, d-1)%m + solve(8, d-1)%m;
    //     else if(n==4) return solve(0, d-1)%m + solve(3, d-1)%m + solve(9, d-1)%m;
    //     else if(n==5) return 1;
    //     else if(n==6) return solve(0, d-1)%m + solve(1, d-1)%m + solve(7, d-1)%m;
    //     else if(n==7) return solve(2, d-1)%m + solve(6, d-1)%m;
    //     else if(n==8) return solve(1, d-1)%m + solve(3, d-1)%m;
    //     else if(n==9) return solve(2, d-1)%m + solve(4, d-1)%m;

    //     return 0;
    // }

    //Recursion + Memoization
    long long solve2(int n, int d, vector<vector<long long>>&dp){
        //Base Case:  
        if(d==0) return 1;
        if(dp[n][d]!=-1) return dp[n][d];

        switch(n){
            case 0: return dp[n][d] = (solve2(4, d-1, dp)%m + solve2(6, d-1, dp)%m)%m;
            case 1: return dp[n][d] = (solve2(6, d-1, dp)%m + solve2(8, d-1, dp)%m)%m;
            case 2: return dp[n][d] = (solve2(7, d-1, dp)%m + solve2(9, d-1, dp)%m)%m;
            case 3: return dp[n][d] = (solve2(4, d-1, dp)%m + solve2(8, d-1, dp)%m)%m;
            case 4: return dp[n][d] = (solve2(0, d-1, dp)%m + solve2(3, d-1, dp)%m + solve2(9, d-1, dp)%m)%m;
            case 5: return dp[n][d] = 1;
            case 6: return dp[n][d] = (solve2(0, d-1, dp)%m + solve2(1, d-1, dp)%m + solve2(7, d-1, dp)%m)%m;
            case 7: return dp[n][d] = (solve2(2, d-1, dp)%m + solve2(6, d-1, dp)%m)%m;
            case 8: return dp[n][d] = (solve2(1, d-1, dp)%m + solve2(3, d-1, dp)%m)%m;
            case 9: return dp[n][d] = (solve2(2, d-1, dp)%m + solve2(4, d-1, dp)%m)%m;
        }

        return 0;
    }

    //Iterative D.P 


    int knightDialer(int n) {

        if(n==1) return 10;
        vector<vector<long long>> dp(10, vector<long long>(n+1, -1)); 

        int sum = 0;
        for(int i=0; i<=9; i++){
            sum = (sum + solve2(i,n-1,dp))%m;
        }

        return sum-1;
    }
};
