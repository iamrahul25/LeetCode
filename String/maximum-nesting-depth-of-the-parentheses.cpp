class Solution {
public:
    int maxDepth(string s) {
        
        int count = 0;
        int maxx = 0;
        
        for(auto x: s){
            if(x=='(') count++;
            else if(x==')') count--;
                
            maxx = max(maxx, count);
        }
        
        return maxx;
    }
};
