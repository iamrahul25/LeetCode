class Solution {
public:
    //Time: O(N) Space: O(1)
    int lengthOfLastWord(string s) {
        int n = s.size();
        
        int length = 0;
        
        for(int i=n-1; i>=0; i--){
            
            if(isalpha(s[i])){
                
                while(i>=0 and isalpha(s[i])){
                    length++;
                    i--;
                }
                break;
            }
        }
        
        return length;
    }
};
