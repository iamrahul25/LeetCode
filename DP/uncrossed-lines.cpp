class Solution {
public:
    //Problem Solution: We have to return length of Longest Common Subsequence: LCS 
    //Time: O(N*M) Space: O(N*M)
    int maxUncrossedLines(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();

        vector<vector<int>> dp(n+2, vector<int>(m+2, 0));

        for(int i=0; i<=n; i++){
            for(int j=0; j<=m; j++){
                if(i==0 || j==0) dp[i][j] = 0;
                else if(nums1[i-1]==nums2[j-1]){
                    dp[i][j] = 1 + dp[i-1][j-1];
                }
                else if(nums1[i-1]!=nums2[j-1]){
                    dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
                }
            }
        }
        return dp[n][m];
    }
};

//Link: https://leetcode.com/problems/uncrossed-lines/
