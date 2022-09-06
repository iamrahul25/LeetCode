class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        
        int row = grid.size();
        int col = grid[0].size();
        
        //Perimenter
        int p = 0;
        
        for(int i=0; i<row; i++){
            for(int j=0; j<col; j++){
                
                if(grid[i][j]==1){
                    
                    //Top 
                    if(i==0 or grid[i-1][j]==0){
                        p++;
                    }
                    
                    //Bottom
                    if(i==row-1 or grid[i+1][j]==0){
                        p++;
                    }

                    //Left
                    if(j==0 or grid[i][j-1]==0){
                        p++;
                    }


                    //Right
                    if(j==col-1 or grid[i][j+1]==0){
                        p++;
                    }
                    
                }
                
            }
        }
        
        return p;
    }
}; 
