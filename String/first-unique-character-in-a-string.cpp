class Solution {
public:
    int firstUniqChar(string s) {
        int hash[26] = {0};

        for(int i=0; i<s.size(); i++){
            hash[s[i]-'a']++;
        }

        int index = -1;

        for(int i=0; i<s.size(); i++){
            if(hash[s[i]-'a']==1){
                index = i;
                break;
            }
        }
        
        return index;
    }
};
