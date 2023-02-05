class Solution {
public:

    //Time: O(N+M) Space: O(26) or O(1)
    vector<int> findAnagrams(string s, string p) {
        int n = s.size();
        int m = p.size();

        if(n<m) return {};

        vector<int> hash1(26, 0);
        vector<int> hash2(26, 0);
        vector<int> ans;

        for(int i=0; i<m; i++){
            hash1[s[i]-'a']++;
            hash2[p[i]-'a']++;
        }

        int i;

        for(i=0; i<n-m; i++){
            if(hash1==hash2) ans.push_back(i);
            
            hash1[s[i]-'a']--;
            hash1[s[i+m]-'a']++;
        }

        if(hash1==hash2) ans.push_back(i);

        return ans;
    }
};
