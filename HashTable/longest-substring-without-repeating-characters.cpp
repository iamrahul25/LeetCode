class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        unordered_map<int,int> mp;
        
        int maxlen = 0;
        int len = 0;

        for(int i=0; i<s.size(); i++){
            
            //Not Found!
            if(mp.find(s[i])==mp.end()){
                mp[s[i]] = i;
                len++;
            }
            else{
                len = min(i-mp[s[i]], ++len);
                mp[s[i]] = i;
            }
            
            maxlen = max(maxlen, len);
        }
    
        return maxlen;
    }
};
