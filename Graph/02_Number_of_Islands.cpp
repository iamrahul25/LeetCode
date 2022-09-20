class Solution {
public:
    
    //Approach 1: BFS   Time: O(N^2)  Space: O(N^2)
    int numIslands(vector<vector<char>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        
        int count = 0;
        
        for(int i=0; i<m; i++){
            
            for(int j=0; j<n; j++){
                
                if(grid[i][j]=='1'){
                    
                    count++;
                    grid[i][j] = '0';
                    
                    queue<pair<int,int>> q;
                    q.push({i,j});
                    
                    while(!q.empty()){
                        int a = q.front().first;
                        int b = q.front().second;
                        
                        q.pop();
                        
                        if((a+1)<m and grid[a+1][b]=='1'){
                            grid[a+1][b] = '0';
                            q.push({a+1,b});
                        }
                        if((a-1)>=0 and grid[a-1][b]=='1'){
                            grid[a-1][b] = '0';
                            q.push({a-1,b});
                        }
                        if((b+1)<n and grid[a][b+1]=='1'){
                            grid[a][b+1] = '0';
                            q.push({a,b+1});
                        }
                        
                        if((b-1)>=0 and grid[a][b-1]=='1'){
                            grid[a][b-1] = '0';
                            q.push({a,b-1});
                        }
                        
                    }
                }
            }
        }
        
        return count;
    }
};
