class Solution {
  public:
    int countDistinctIslands(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        
        set<vector<pair<int,int>>> st;
        
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                
                if(grid[i][j]==1){
                    
                    vector<pair<int,int>> v;
                    queue<pair<int,int>> q;
                    q.push({i,j});
                    grid[i][j] = 0;
                    
                    pair<int,int> base = {i,j};
                    
                    while(!q.empty()){
                        
                        int a = q.front().first;
                        int b = q.front().second;
                        v.push_back({a - base.first, b - base.second});
                        q.pop();
                        
                        if(a-1>=0 and grid[a-1][b]==1){
                            q.push({a-1,b});
                            grid[a-1][b] = 0;
                        }
                        if(a+1<n and grid[a+1][b]==1){
                            q.push({a+1,b});
                            grid[a+1][b] = 0;
                        }
                        if(b-1>=0 and grid[a][b-1]==1){
                            q.push({a,b-1});
                            grid[a][b-1] = 0;
                        }
                        if(b+1<m and grid[a][b+1]==1){
                            q.push({a,b+1});
                            grid[a][b+1] = 0;
                        }
                    }
                    st.insert(v);
                }
            }
        }
        
        
        return st.size();
    }
};
