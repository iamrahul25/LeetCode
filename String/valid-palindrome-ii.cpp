class Solution {
public:
    int checkPalindrome(string s){
        
        int n = s.size();
        int index = -1;
        
        for(int i=0; i<n/2; i++){
            if(s[i]!=s[n-i-1]){
                index = i;
                break;
            }
        }
        
        return index;
    }
    

    bool validPalindrome(string s) {
        
        int index = checkPalindrome(s);
        if(index == -1) return true;
        
        string s2 = s, s3 = s;
        s2.erase(index,1);
        s3.erase(s.size()-1-index, 1);
        
        if(checkPalindrome(s2)==-1 or checkPalindrome(s3)==-1) return true;
        else return false;
    }
};
