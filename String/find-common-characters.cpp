class Solution {
public:
    
    //Appraoch 1: Time: O(N)  Space: O(N)
    vector<string> commonChars(vector<string>& words) {
        
        int n = words.size();
        int hashing[26] = {0};
        
        for(int i=0; i<words[0].size(); i++){
            hashing[words[0][i]-'a']++;
        }
        
        for(int i=0; i<n; i++){
            int hash[26] = {0};
            for(int j=0; j<words[i].size(); j++){
                hash[words[i][j]-'a']++;
            }
            
            for(int i=0; i<26; i++){
                hashing[i] = min(hash[i], hashing[i]);
            }
        }
        
        vector<string> ans;
        
        for(int i=0; i<26; i++){
            
            while(hashing[i]!=0){
                int ascii = i + 'a';
                string s(1,char(ascii));
                ans.push_back(s);
                hashing[i]--;
            }
        }
        
        return ans;
    }
};
