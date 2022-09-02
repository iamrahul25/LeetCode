class Solution {
public:
    
    //Approach 2: Time: O(N)  Space: O(1) --> Reversing Individual words then reversing whole word. 
    
    
    
    //Approach 1: Time: O(N)  Space: O(N+N)
    string reverseWords(string s){
        
        vector<string> vec;
        
        for(int i=0; i<s.size(); i++){
            
            if(isalnum(s[i])){
                
                string word = "";
                
                while(isalnum(s[i]) and i<s.size()){
                    word = word + s[i];
                    i++;
                }
                
                vec.push_back(word);
            }
        }
        
        //Reversing Vector
        reverse(vec.begin(), vec.end());
        
        string ans = "";
        
        for(auto x: vec){
            ans = ans + x;
            ans = ans + ' ';
        }
        
        ans.pop_back();
        
        return ans;
    }
};
