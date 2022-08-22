class Solution {
public:
    vector<int> constructRectangle(int area) {
        
        int n = area;
        
        int minn = INT_MAX;
        
        vector<int> ans(2,0);
        
        int root = sqrt(area);
        
        for(int i=root; i>=1; i--){
            if(area%i==0){
                ans[0] = area/i;
                ans[1] = area/ans[0];
                break;
            }
        }
        
        
        return ans;
    }
};
