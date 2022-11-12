class Solution {
public:
    //Print Shortest Common Supersequence
    string shortestCommonSupersequence(string s1, string s2) {
        int m = s1.size();
        int n = s2.size();
        
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

        int i=m, j=n; 
        string ans = "";

        while(i>0 and j>0){
            if(s1[i-1]==s2[j-1]){
                ans = ans + s1[i-1];
                i--, j--;
            }
            else{
                if(dp[i-1][j] > dp[i][j-1]){
                    ans = ans + s1[i-1];
                    i--;
                }
                else{
                    ans = ans + s2[j-1];
                    j--;
                }
            }
        }

        while(i > 0){
            i--;
            ans = ans + s1[i-1];
        }

        while(j>0){
            ans = ans + s2[j-1];
            j--;
        }

        //Reversing String 
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
