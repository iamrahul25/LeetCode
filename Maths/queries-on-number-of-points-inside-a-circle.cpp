class Solution {
public:
    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {
        
        int n = points.size();
        int q = queries.size();
        
        vector<int> ans;
        
        
        for(int i=0; i<q; i++){
            
            int count = 0;
            
            for(int j=0; j<n; j++){
                
                
                int px = points[j][0];
                int py = points[j][1];
                
                int rx = queries[i][0];
                int ry = queries[i][1];
                
                int R = queries[i][2];
                
                //Circle equation: (x-a)^2 + (y-b)^2 <= R^2;
                if(((rx - px)*(rx-px)) + ((ry - py)*(ry - py)) <= R*R){
                    count++;
                }
                
            }
            
            ans.push_back(count);
        }
        
        return ans;
        
    }
};
