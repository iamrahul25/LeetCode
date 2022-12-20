class Solution {
public:
    //Approach 1: DFS Traversal
    void dfs(int row, int col, vector<vector<int>>&grid, int color, int source){
        grid[row][col] = color;

        int arrx[] = {0,0,-1,+1};
        int arry[] = {-1,+1,0,0};

        int n = grid.size();
        int m = grid[0].size();

        for(int i=0; i<4; i++){
            int x = arrx[i] + row;
            int y = arry[i] + col;
            if((x>=0 and x<n) and (y>=0 and y<m) and (grid[x][y]==source)){
                dfs(x,y,grid,color,source);
            }
        }
    }

    //Approach 2: BFS Traversal
    void bfs(int row, int col, vector<vector<int>>&grid, int color, int source){
        grid[row][col] = color;
        queue<pair<int,int>> q;
        q.push({row, col});

        int n = grid.size();
        int m = grid[0].size();

        int arrx[4] = {-1,+1,0,0};
        int arry[4] = {0,0,-1,+1};

        while(!q.empty()){
            int i = q.front().first;
            int j = q.front().second;
            q.pop();

            for(int k=0; k<4; k++){
                int x = arrx[k] + i;
                int y = arry[k] + j;

                if((x>=0 and x<n) and (y>=0 and y<m) and (grid[x][y]==source)){
                    grid[x][y] = color;
                    q.push({x,y});
                }
            }
        }
    }

    vector<vector<int>> floodFill(vector<vector<int>>&image, int sr, int sc, int color){
        int source = image[sr][sc];
        if(source==color) return image;

        dfs(sr,sc,image,color,source); //Use BFS or DFS here! (Any one)
        return image;
    }
};
