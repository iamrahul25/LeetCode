class Solution {
public:

    //Using DP: Time: O(N^2)  Space: O(N^2)
    string longestPalindrome(string s) {

        int n = s.size();
        vector<vector<int>> dp(n, vector<int>(n, 0));
    
        for(int i=0; i<n; i++){
            dp[i][i] = 1;
            if((i+1<n) && (s[i]==s[i+1])){
                dp[i][i+1] = 1;
            }
        }

        for(int i=2; i<n; i++){
            for(int j=0; j<n-i; j++){
                if(s[j]==s[j+i] and dp[j+1][j+i-1]==1){
                    dp[j][j+i] = 1;
                }
            }
        }

        int maxlen = 0;
        int start, end;

        for(int i=0; i<n; i++){
            for(int j=i; j<n; j++){
                if(dp[i][j]==1 and (j-i+1 > maxlen)){
                    maxlen = j-i+1;
                    start = i;
                    end = j;
                }
            }
        }

        return s.substr(start, end-start+1);
    }


    

    //Method 1: Brute Force --- TLE Error (48/141 Test Case Passed)
    //Time: O(N^3) Space: O(1)
    // string longestPalindrome(string s) {
    //     int n = s.size();
    //     int maxx = 0;
    //     string ans;
    //     for(int i=0; i<n; i++){
    //         for(int j=i; j<n; j++){
    //             if(palindrome(i,j,s) and (j-i+1)>maxx){
    //                 maxx = j-i;
    //                 ans = s.substr(i,j-i+1);
    //             }
    //         }
    //     }

    //     return ans;
    // }

    // bool palindrome(int i, int j, string s){
    //     while(i<j){
    //         if(s[i]!=s[j]) return false;
    //         i++; 
    //         j--;
    //     }
    //     return true;
    // }
};
