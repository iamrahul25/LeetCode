class Solution {
public:
    
    string getPermutation(int n, int k) {
        
        string s = "";
        
        for(int i=1; i<=n; i++){
            s = s + to_string(i);
        }
        
        for(int i=0; i<k-1; i++){
            next_permutation(s.begin(), s.end());
        }
        
        return s;
    }
};
