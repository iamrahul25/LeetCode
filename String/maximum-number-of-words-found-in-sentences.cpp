class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int maxx = 0;
        
        for(auto str: sentences){
            int count = 0;
            for(auto c: str){
                if(c==' ') count++;
            }
            maxx = max(maxx, count);
        }
        
        return maxx+1;
    }
};
