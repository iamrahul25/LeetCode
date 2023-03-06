class Solution {
public:

    //Sliding Window Problem: Variable Length  Time: O(N+M) Space: O(1)
    string minWindow(string s, string t) {
        int i = 0;
        int j = 0;
        int minlen = INT_MAX;
        int si=0, ei=0;
        
        unordered_map<char, int> mp;
        for(int i=0; i<t.size(); i++){
            mp[t[i]]++;
        }

        int count = mp.size();
        while(j<s.size()){

            if(mp.find(s[j])!=mp.end()){
                mp[s[j]]--;
                if(mp[s[j]]==0) count--;
            }

            if(count==0){
                while(count==0){
                    if(minlen>(j-i+1)){
                        si = i;
                        ei = j;
                        minlen = j-i+1;
                    }
                    if(mp.find(s[i])!=mp.end()){
                        if(mp[s[i]]==0) count++;
                        mp[s[i]]++;
                    }
                    i++;
                }
            }
            j++;
        }

        if(minlen==INT_MAX) return "";
        return s.substr(si, ei-si+1);
    }
};
