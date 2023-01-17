//Problem Link: https://leetcode.com/problems/flip-string-to-monotone-increasing/

class Solution {
public:

    //Time: O(N) Space: O(1)
    int minFlipsMonoIncr(string s) {
        int n = s.size();
        int tzero = count(s.begin(), s.end(), '0');
        int one = 0, zero = 0;
        int ans = INT_MAX;
        int onepluszero;

        for(int i=0; i<n; i++){
            onepluszero = one + (tzero - zero);
            ans = min(ans, onepluszero);

            if(s[i]=='0') zero++;
            else one++;
        }

        onepluszero = one + (tzero - zero);
        ans = min(ans, onepluszero);

        return ans;
    }
};
