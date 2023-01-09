class Solution {
public:

    //Time: O(N) and Space: O(1) -> Map and Sliding Window Problem.
    bool checkInclusion(string s1, string s2){
        vector<int> hash1(26,0);
        vector<int> hash2(26,0);

        for(auto c: s1) hash1[c-'a']++;

        int n = s1.size();
        int m = s2.size();

        for(int i=0; i<m; i++){
            hash2[s2[i]-'a']++;
            if(i>=n){
                hash2[s2[i-n]-'a']--;
            }
            if(hash1 == hash2) return true;
        }
        return false;
    }
};
