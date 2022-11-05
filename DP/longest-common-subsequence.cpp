class Solution {
public:
    
    //Approach 1: Recursion + Memoization --> TLE Error (42/45) Test Case Passed!
    
//     int lcs(int i, int j, string s1, string s2, vector<vector<int>> &dp){
//         //Base Case: 
//         if(i==s1.size() || j==s2.size()){
//             return 0;
//         }

//         //If already calculated
//         if(dp[i][j]!=-1){
//             return dp[i][j];
//         }

//         //Match
//         if(s1[i]==s2[j]){
//             return dp[i][j] = 1 + lcs(i+1,j+1,s1,s2,dp);
//         }
//         //Does Not Match
//         else{
//             return dp[i][j] = max(lcs(i+1,j,s1,s2,dp), lcs(i,j+1,s1,s2,dp));
//         }
//     }
    
    
//     int longestCommonSubsequence(string text1, string text2) {
        
//         vector<vector<int>> dp(text1.size(), vector<int>(text2.size(), -1));
        
//         return lcs(0,0,text1, text2, dp);
//     }
    
    
    //Appraoch 2: DP -> Bottom Up (Tabulation)
    int longestCommonSubsequence(string text1, string text2) {

        int m = text1.length();
        int n = text2.length();

        //Create a 2D array to store the result
        vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));

        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(text1[i]==text2[j]){
                    dp[i+1][j+1] = dp[i][j] + 1;
                }
                else{
                    dp[i+1][j+1] = max(dp[i+1][j], dp[i][j+1]);
                }
            }
        }

        return dp[m][n];
    
    }
    
};
