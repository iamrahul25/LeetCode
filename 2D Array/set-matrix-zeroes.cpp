class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        
        int n = matrix.size();
        int m = matrix[0].size();
        
        vector<int> hash_row(n,0);
        vector<int> hash_column(m,0);
        
        //Loop For Traversering
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(matrix[i][j]==0){
                    hash_row[i] = 1;
                    hash_column[j] = 1;
                }
            }
        }
        
        //Loop for making rows and column zero. 
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(hash_row[i]==1 or hash_column[j]==1){
                    matrix[i][j] = 0;
                }
            }
        }
        
    }
};
