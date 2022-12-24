class Solution {
public:

    //D.P Problem : Time: O(N)  

    int m = 1000000007;

    //Recursion 
    int domino(int n){
        //Base Case
        if(n==1) return 1;
        else if(n==2) return 2;
        else if(n==3) return 5;

        return 2*domino(n-1) + domino(n-3);
    }

    //Recursion + Memoization 
    int domino2(int n, vector<int> &dp){
        //Base Case
        if(n==1) return 1;
        else if(n==2) return 2;
        else if(n==3) return 5;

        if(dp[n]!=-1) return dp[n];
        return dp[n] = (((2*domino2(n-1, dp))%m) + (domino2(n-3, dp)%m))%m;
    }

    //Iterative Code: 
    int domino3(int n){
        vector<int> dp(n+4, 0);
        dp[1] = 1;
        dp[2] = 2;
        dp[3] = 5;

        for(int i=4; i<=n; i++){
            dp[i] = (((2*dp[i-1])%m) + ((dp[i-3])%m))%m;
        }

        return dp[n];
    }

    int numTilings(int n){

        //Recursive
        // return domino(n);

        //Recusion + Memoization
        // vector<int> dp(n+1, -1);
        // return domino2(n, dp);

        //Iterative
        return domino3(n);
    }
};
