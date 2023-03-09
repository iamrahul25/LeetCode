class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        int row = grid.size();
        int col = grid[0].size();

        vector<int> rowsum(row, 0);
        vector<int> colsum(col, 0);

        for(int i=0; i<row; i++){
            for(int j=0; j<col; j++){
                rowsum[i] = rowsum[i] + grid[i][j];
                colsum[j] = colsum[j] + grid[i][j];
            }
        }

        for(int i=0; i<row; i++){
            for(int j=0; j<col; j++){
                int ones = rowsum[i] + colsum[j];
                int zeros = (row+col) - ones;
                grid[i][j] = ones - zeros;
            }
        }

        return grid;
    }
};
