class Solution {
public:
    bool checkString(string s) {
        
        int n = s.size();
        int idxa = -1;
        int idxb = n;
        
        for(int i=0; i<n; i++){
            if(s[i]=='b'){
                idxb = i;
                break;
            }
        }
        
        for(int i=n-1; i>=0; i--){
            if(s[i]=='a'){
                idxa = i;
                break;
            }
        }
        
        if(idxa > idxb) return false;
        return true;
    }
};
