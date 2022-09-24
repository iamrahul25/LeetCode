class Solution {
public:
    
    //Approach 1: BFS Traversal 
    int numEnclaves(vector<vector<int>>& grid){
        
        int m = grid.size();
        int n = grid[0].size();
        
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(grid[i][j]==1 and ((i==0) or (i==(m-1))  or (j==0) or (j==(n-1))) ){
                    bfs(i,j,grid);
                }
            }
        }
        
        //Counting Number of One's that are left
        int count = 0;
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(grid[i][j]==1) count++;
            }
        }
        
        return count;
    }
    
    void bfs(int i, int j, vector<vector<int>>&grid){
        
        int m = grid.size();
        int n = grid[0].size();
        
        grid[i][j] = 0;
    
        queue<pair<int,int>> q;
        q.push({i,j});
        
        while(!q.empty()){
            
            int a = q.front().first;
            int b = q.front().second;

            q.pop();

            if((a+1)<m and grid[a+1][b]==1){
                grid[a+1][b] = 0;
                q.push({a+1,b});
            }
            if((a-1)>=0 and grid[a-1][b]==1){
                grid[a-1][b] = 0;
                q.push({a-1,b});
            }
            if((b+1)<n and grid[a][b+1]==1){
                grid[a][b+1] = 0;
                q.push({a,b+1});
            }

            if((b-1)>=0 and grid[a][b-1]==1){
                grid[a][b-1] = 0;
                q.push({a,b-1});
            }
        }
    }
};
