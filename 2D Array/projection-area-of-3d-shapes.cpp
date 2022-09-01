class Solution {
public:
    int projectionArea(vector<vector<int>>& grid) {
        
        int n = grid.size();
        
        vector<int> row(n,0);
        vector<int> col(n,0);
        
        int area = 0;
        
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                row[i] = max(row[i], grid[i][j]);
                col[j] = max(col[j], grid[i][j]);
                
                if(grid[i][j]!=0){
                    area++;
                }
            }
        }
        
        for(auto x: row){
            cout<<x<<" ";
            area = area + x;
        }
        
        for(auto y: col){
            cout<<y<<" ";
            area = area + y;
        }
        
        return area;
    }
};
