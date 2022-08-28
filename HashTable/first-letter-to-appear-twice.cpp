class Solution {
public:
    char repeatedCharacter(string s) {
        
        int hash[26] = {0};
        
        char ans;
        
        for(int i=0; i<s.size(); i++){
            if(hash[s[i]-'a']==0){
                hash[s[i]-'a']++;
            }
            else{
                ans = s[i];
                break;
            }
        }
        
        return ans;
    }
};
