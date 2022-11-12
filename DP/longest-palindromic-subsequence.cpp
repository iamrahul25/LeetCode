class Solution {
public:
    //DP Problem - LCS (Longest Common Subsequence)
    
    //Time: O(N^2)  Space: O(N^2)
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
    
    int longestPalindromeSubseq(string s) {
        string s2 = s;
        reverse(s2.begin(), s2.end());
        
        return lcs(s, s2, s.length(), s2.length());
    }
};
