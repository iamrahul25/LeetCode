class Solution {
public:
    
    int row, col;
    int extractSum(int i, int j,  vector<vector<int>>& sum) {
        if (i < 0 || j < 0) return 0;
        if (i >= row) i = row - 1;
        if (j >= col) j = col - 1;
        return sum[i][j];
    }
    
    
    vector<vector<int>> matrixBlockSum(vector<vector<int>>& mat, int k) {
        
        row = mat.size();
        col = mat[0].size();
        
        vector<vector<int>> ans(row, vector<int>(col));
        
        //Prefix Sum Matrix: 
        vector<vector<int>> prefix(row, vector<int>(col, 0));
        
        //Row Sum
        for(int i=0; i<row; i++){
            int sum = 0;
            for(int j=0; j<col; j++){
                sum = sum + mat[i][j];
                prefix[i][j] = sum;
            }
        }
        
        //Col Sum
        for(int i=0; i<col; i++){
            int sum = 0;
            for(int j=0; j<row; j++){
                sum = sum + prefix[j][i];
                prefix[j][i] = sum;
            }
        }
        
        
        // for(auto row: prefix){
        //     for(auto x: row){
        //         cout<<x<<" ";
        //     }
        //     cout<<endl;
        // }
        
        
        //Answer Finding
        for(int i=0; i<row; i++){
            
            for(int j=0; j<col; j++){
                
                ans[i][j] = extractSum(i+k, j+k, prefix) - extractSum(i+k, j-k-1,prefix) - extractSum (i-k-1, j+k, prefix) + extractSum(i-k-1, j-k-1, prefix);
            }
        }
        
        return ans;
        
    }
    
//Approach 1: Brute Force
//     vector<vector<int>> matrixBlockSum(vector<vector<int>>& mat, int k) {
        
//         int row = mat.size();
//         int col = mat[0].size();
        
//         vector<vector<int>> ans(row, vector<int>(col));
        
//         for(int i=0; i<row; i++){
//             for(int j=0; j<col; j++){
                
//                 int a1 = max(i-k,0);
//                 int b1 = max(j-k,0);
                
//                 int a2 = min(row-1, i+k);
//                 int b2 = min(col-1, j+k);
                
//                 int sum = 0;
//                 for(int p=a1; p<=a2; p++){
//                     for(int q=b1; q<=b2; q++){
//                         sum = sum + mat[p][q];
//                     }
//                 }
                
//                 ans[i][j] = sum;
                
//             }
//         }
        
//         return ans;
//     }
    
};
