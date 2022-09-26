class Solution {
public:
    
    //Approach 1: Using 2 Map and 1 String Vector   Time: O(N)  Space: O(3N) ~ O(N)
    bool wordPattern(string pattern, string s) {
        
        unordered_map<char,string> mp1;
        unordered_map<string,char> mp2;
        
        vector<string> vec;
        
        string str = "";
        int x = 0;
        
        for(int i=0; i<s.size(); i++){
            if(s[i]==' '){
                mp1[pattern[x]] = str;
                mp2[str] = pattern[x];
                vec.push_back(str);
                str = "";
                x++;
            }
            
            else str = str + s[i];
        }
        
        vec.push_back(str);
        mp1[pattern[x]] = str;
        mp2[str] = pattern[x];
        
        for(int i=0; i<pattern.size(); i++){
            if(mp1.find(pattern[i])==mp1.end() or mp2.find(vec[i])==mp2.end()) return false;
            else if(mp1[pattern[i]]!=vec[i] or mp2[vec[i]]!=pattern[i]) return false;
        }
        
        return true;
    }
};
