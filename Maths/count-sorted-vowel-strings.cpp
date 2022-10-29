class Solution {
public:
    //Approach 1: Time: O(1) Space: O(1)
    int countVowelStrings(int n) {
        return ((n+1)*(n+2)*(n+3)*(n+4))/24;
    }
};
