class Solution {
public:
    
//Approach 2: Time: O(N)  Space: O(1) : Two Pointer Approach. 
    bool checkAlphaNumeric(char c){
        if((c>='a' and c<='z') or (c>='A' and c<='Z') or (c>='0' and c<='9')){
            return true;
        }
        return false;
    }
    
    
    bool isPalindrome(string s){
        
        int n = s.size();
        
        int p1 = 0;
        int p2 = n-1;
        
        while(p1<=p2){
            
            if(!checkAlphaNumeric(s[p1])){
                p1++;
                continue;
            } 
            
            if(!checkAlphaNumeric(s[p2])){
                p2--;
                continue;
            }
            
            if(tolower(s[p1]) != tolower(s[p2])) return false;
            
            p1++;
            p2--;
        }
        
        return true;
        
    }
    
    
    
    
//Approach 1: Time: O(N)  Space: O(N)  => TLE Error(479/480) Test case Passed! 
    
//     bool checkPalindrome(string s){
//         int n = s.size();
//         if(n==0) return true;
//         for(int i=0; i<=s.size()/2; i++){
//             if(s[i]!=s[n-1-i]) return false;
//         }
//         return true;
//     }
    
    
//     bool isPalindrome(string s) {
        
//         string str = "";
        
//         //Removing Extra characters and whitespaces and Converting Uppercase to Lowercase.
//         for(int i=0; i<s.size(); i++){
//             if(s[i]>='a' and s[i]<='z'){
//                 str = str + s[i];
//             }
//             else if(s[i]>='A' and s[i]<='Z'){
//                 char c = s[i] + 32;
//                 str = str + c;
//             }
//             else if(s[i]>='0' and s[i]<='9'){
//                 str = str + s[i];
//             }
//         }
        
//         return checkPalindrome(str);
//     }
    
    
};
