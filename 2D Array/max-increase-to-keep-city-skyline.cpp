class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        
        int n = grid.size();
        
        vector<int> rows(n,0);
        vector<int> cols(n,0);
        
        //Rows and Columns Max: 
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                rows[i] = max(rows[i], grid[i][j]);
                cols[i] = max(cols[i], grid[j][i]);
            }
        }
        
        
        //Sum
        int sum = 0;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                sum = sum + min(rows[i], cols[j]) - grid[i][j];
            }
        }
        
        return sum;
    }
};
