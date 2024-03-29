class Solution {
public:
    
    //Best Approach. => Short Code.  Time: O(M*N) Space: O(1)
    bool isToeplitzMatrix(vector<vector<int>>& matrix){
        int r = matrix.size();
        int c = matrix[0].size();
        
        for(int i=1; i<r; i++){
            for(int j=1; j<c; j++){
                if(matrix[i][j]!=matrix[i-1][j-1]){
                    return false;
                }
            }
        }
        
        return true;
    }
    
    //Time Complexity: O(M*N)  Space: O(1) ---- Over Use of Brain ----Long Method. 
//     bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        
//         int r = matrix.size();
//         int c = matrix[0].size();
        
//         //Upper Diagonals
//         for(int i=0; i<c; i++){
            
//             int a = 0, b = i;
//             int last = matrix[a][b];
            
//             while(a<min(r,c) and b<c){
                
//                 if(matrix[a][b]!=last){
//                     return false;
//                 }
//                 a++; b++;
//             }
//         }
        
        
//         //Left Side Diagonals
//         for(int i=1; i<r; i++){
            
//             int a = i, b = 0;
//             int last = matrix[a][b];
            
//             while(a<r and b<min(r,c)){
//                 if(matrix[a][b]!=last){
//                     return false;
//                 }
                
//                 a++; b++;
//             }
//         }
        
//         return true;
//     }
    
};
