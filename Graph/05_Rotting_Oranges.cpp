class Solution {
public:
    
    //BFS Traversal + Time  Time: O(N^2)  Space: O(N^2)
    int orangesRotting(vector<vector<int>>& grid){
        
        int m = grid.size();
        int n = grid[0].size();
        
        queue<pair<int, pair<int,int>>> q;
        
        //Inserting all Rotten oranges in queue at time = 0. 
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                
                if(grid[i][j]==2){
                    q.push({0,{i,j}});
                    
                    //Visited
                    grid[i][j] = 0;
                }
            }
        }
        
        int maxtime = 0;
        
        while(!q.empty()){
            
            int time = q.front().first;
            int i = q.front().second.first;
            int j = q.front().second.second;
            
            maxtime = max(maxtime, time);
            
            q.pop();
            
            if(i-1>=0 and grid[i-1][j]==1){
                grid[i-1][j] = 0;
                q.push({time+1,{i-1,j}});
            }
            if(i+1<m and grid[i+1][j]==1){
                grid[i+1][j] = 0;
                q.push({time+1,{i+1,j}});
            }
            if(j-1>=0 and grid[i][j-1]==1){
                grid[i][j-1] = 0;
                q.push({time+1,{i,j-1}});
            }
            if(j+1<n and grid[i][j+1]==1){
                grid[i][j+1] = 0;
                q.push({time+1,{i,j+1}});
            }
        }
        
        //Check if Any fresh Oranges is Left
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(grid[i][j]==1){
                    return -1;
                }
            }
        }
        
        return maxtime;
        
    }
};
