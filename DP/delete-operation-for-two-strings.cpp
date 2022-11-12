class Solution {
public:
    //Dynamic Programming (DP) Problem
    //LCS(Longest Common Subsequence) Problem Type
    
    int lcs(string s1, string s2, int m, int n){

        //Initializing DP Matrix
        vector<vector<int>> dp(m+1, vector<int>(n+1, 0));

        for(int i=1; i<=m; i++){
            for(int j=1; j<=n; j++){
                if(s1[i-1]==s2[j-1]){
                    dp[i][j] = 1 + dp[i-1][j-1];
                }
                else{
                    dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
                }
            }
        }

        return dp[m][n];
    }
    
    
    int minDistance(string word1, string word2) {
        int m = word1.size();
        int n = word2.size();
        
        return (m+n) - (2*lcs(word1,word2,m,n));
    }
};
