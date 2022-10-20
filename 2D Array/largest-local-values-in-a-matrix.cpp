class Solution {
public:
    
    //Not the best solution: We can further optimise this Problem. 
    //Time complexity: 9*(N*N)  
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        int n = grid.size();
        
        //Creating (n-2) x (n-2) Matrix
        vector<vector<int>> matrix(n-2, vector<int>(n-2));
        
        for(int i=0; i<n-2; i++){
            for(int j=0; j<n-2; j++){
                
                int maxx = 0;
                for(int p=i; p<i+3; p++){
                    for(int q=j; q<j+3; q++){
                        maxx = max(maxx, grid[p][q]);
                    }
                }
                
                matrix[i][j] = maxx;
            }
        }
        
        return matrix;
    }
};
