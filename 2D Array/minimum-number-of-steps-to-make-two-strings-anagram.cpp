class Solution {
public:
    int minSteps(string s, string t) {
        vector<int> hash1(26, 0);
        vector<int> hash2(26, 0);
        int n = s.size();

        for(int i=0; i<n; i++){
            hash1[s[i]-'a']++;
            hash2[t[i]-'a']++;
        }
        
        int count = 0;
        for(int i=0; i<26; i++){
            count = count + abs(hash1[i]-hash2[i]);
        }
        return count/2;
    }
};
