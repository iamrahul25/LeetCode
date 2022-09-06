class Solution {
public:
    
    //Time: O(N)   Space: O(N)
    int longestPalindrome(string s) {
        unordered_map<char, int> mp;
        
        //Hashing or Frequency map
        for(auto x: s){
            mp[x]++;
        }
        
        
        int length = 0;
        int oddflag = 0;
        
        for(auto x: mp){
            length = length + (x.second - x.second%2);
            
            //Odd Frequency
            if(x.second%2==1){
                oddflag = 1;
            }
        }
        
        
        if(oddflag) return length+1;
        
        else return length;
    }
};
