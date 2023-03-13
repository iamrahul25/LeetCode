class Solution {
public:

    //Approach 2: Without Using Extra Space: Time: O(N) Space: O(1)

    //Approach 1: Using Extra Space: Time: O(N) Space: O(N)
    int minimumDeletions(string s) {
        int n = s.size();
        vector<int> onecount(n+2, 0);
        vector<int> zerocount(n+2, 0);

        int one = 0, zero = 0;

        for(int i=0; i<n; i++){
            onecount[i+1] = one;
            zerocount[n-i] = zero;

            if(s[i]=='b') one++;
            if(s[n-i-1]=='a') zero++;
        }

        onecount[n+1] = one;
        zerocount[0] = zero;

        int ans = n;
        for(int i=0; i<n+2; i++){
            ans = min(ans, (onecount[i] + zerocount[i]));
        }

        return ans;
    }
};
