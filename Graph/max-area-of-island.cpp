class Solution {
public:

    //Appraoch 2: Using DFS Traversal

    //Approach 1: Using BFS Traversal
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();

        int maxarea = 0;

        int arrx[4] = {0,0,-1,+1};
        int arry[4] = {-1,+1,0,0};

        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){

                if(grid[i][j]==1){

                    int area = 0;

                    //BFS Traversal 
                    grid[i][j] = 0;

                    queue<pair<int,int>> q;
                    q.push({i,j});

                    while(!q.empty()){
                        int a = q.front().first;
                        int b = q.front().second;
                        area++;
                        q.pop();

                        for(int k=0; k<4; k++){
                            int x = arrx[k] + a;
                            int y = arry[k] + b;

                            if((x>=0 and x<n) and (y>=0 and y<m) and (grid[x][y]==1)){
                                grid[x][y] = 0;
                                q.push({x,y});
                            }
                        }
                    }

                    maxarea = max(maxarea, area);
                }
            }
        }

        return maxarea;
    }
};
