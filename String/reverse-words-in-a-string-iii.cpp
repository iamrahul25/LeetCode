class Solution {
public:
    string reverseWords(string s) {
        
        int c = 0;
        int i = 0;
        
        for(i=0; i<s.size(); i++){
            if(s[i]==' '){
                reverse(s.begin()+i-c, s.begin()+i);
                c = 0;
            }
            else c++;
        }
        
        reverse(s.begin()+i-c, s.begin()+i);
        
        return s;
    }
};
