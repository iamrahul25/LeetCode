class Solution {
public:
    
    //Approach 1: BFS Traversal  Time: O(N^2)  Space: O(1)
    vector<vector<int>> colorBorder(vector<vector<int>>& grid, int row, int col, int color) {
        int m = grid.size();
        int n = grid[0].size();
        
        int tocolor = grid[row][col];
        
        if(tocolor==color) return grid;
        
        //BFS Traversal
        queue<pair<int,int>> q;
        q.push({row,col});
        grid[row][col] = -tocolor;
        
        while(!q.empty()){
            int a = q.front().first;
            int b = q.front().second;
            
            q.pop();
            
            if(a-1>=0 and grid[a-1][b]==tocolor){
                q.push({a-1,b});
                grid[a-1][b] = -tocolor;
            }
            if(a+1<m and grid[a+1][b]==tocolor){
                q.push({a+1,b});
                grid[a+1][b] = -tocolor;
            }
            if(b-1>=0 and grid[a][b-1]==tocolor){
                q.push({a,b-1});
                grid[a][b-1] = -tocolor;
            }
            if(b+1<n and grid[a][b+1]==tocolor){
                q.push({a,b+1});
                grid[a][b+1] = -tocolor;
            }
        }
        
        for(int i=1; i<m-1; i++){
            for(int j=1; j<n-1; j++){
                if(grid[i][j] == -tocolor){
                    int x = tocolor;
                    if(abs(grid[i+1][j])==x and abs(grid[i-1][j])==x and abs(grid[i][j+1])==x and abs(grid[i][j-1])==x){
                        grid[i][j] = tocolor;
                    }
                }
            }
        }
        
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(grid[i][j]== -tocolor){
                    grid[i][j] = color;
                }
            }
        }
        
        
        return grid;
        
    }
};
