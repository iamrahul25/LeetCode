class Solution {
public:
    int closedIsland(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();

        vector<vector<int>> visited(n, vector<int>(m, 0));

        int arrx[] = {-1,0,0,1};
        int arry[] = {0,-1,1,0};

        int ans = 0;

        for(int i=0; i<n; i++){

            for(int j=0; j<m; j++){

                if(grid[i][j]==0 and visited[i][j]==0){
                    queue<pair<int,int>> q;
                    q.push({i,j});
                    visited[i][j] = 1;

                    bool flag = true;

                    while(!q.empty()){
                        int a = q.front().first;
                        int b = q.front().second;

                        if((a==0 || a==n-1 || b==0 || b==m-1) and (grid[a][b]==0)) flag = false;

                        for(int k=0; k<4; k++){
                            int x = a + arrx[k];
                            int y = b + arry[k];

                            if((x>=0 && x<n) && (y>=0 and y<m) && visited[x][y]==0 and grid[x][y]==0){
                                visited[x][y] = 1;
                                q.push({x,y});
                            } 
                        }
                        q.pop();
                    }

                    if(flag){
                        ans++;
                    }
                }
            }
        }

        return ans;
    }
};
