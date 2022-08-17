class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string> v = { ".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
    
    
        set<string> ss;
        
        for(int i=0; i<words.size(); i++){
            string str = "";
            for(int j=0; j<words[i].size(); j++){
                str = str + v[words[i][j]-'a'];
            }
            
            ss.insert(str);
        }
        
        return ss.size();
        
    }
};
