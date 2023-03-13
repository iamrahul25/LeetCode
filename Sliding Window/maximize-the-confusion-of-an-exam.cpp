class Solution {
public:

    int longestWindow(string &s, int k, char val) {
        int n = s.size();
        int i = 0, j = 0;
        int maxlen = 0;

        while(j<n){
            if(k>=0){
                if(s[j]==val) k--;
                j++;
            }
            else{
                if(s[i]==val) k++;
                i++;
            }
            if(k>=0) maxlen = max(maxlen, j-i);
        }
        return maxlen;
    }

    //Sliding Window Problem: 2 Times Sliding Window 1 -> True and 2-> False  Time: O(N) Space: O(1)
    int maxConsecutiveAnswers(string s, int k) {
        
        int t = longestWindow(s, k, 'T');
        int f = longestWindow(s, k, 'F');

        return max(t,f);
    }
};
