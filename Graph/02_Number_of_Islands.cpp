//Short Code:-----------------------------------------------------------------------------
//Approach 2: DFS Traversal 
void dfs(int row, int col, vector<vector<char>>&grid){
    grid[row][col] = '0';

    int n = grid.size();
    int m = grid[0].size();

    int arrx[4] = {-1,+1,0,0};
    int arry[4] = {0,0,-1,+1};

    for(int k=0; k<4; k++){
        int x = arrx[k] + row;
        int y = arry[k] + col;

        if((x>=0 and x<n) and (y>=0 and y<m) and (grid[x][y]=='1')){
            grid[x][y] = '0';
            dfs(x,y,grid);
        }
    }
}

//Approach 1: BFS Traversal
void bfs(int row, int col, vector<vector<char>>&grid){
    grid[row][col] = '0';
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

            if((x>=0 and x<n) and (y>=0 and y<m) and (grid[x][y]=='1')){
                grid[x][y] = '0';
                q.push({x,y});
            }
        }
    }
}

//Main Function
int numIslands(vector<vector<char>>& grid){
    int n = grid.size();
    int m = grid[0].size();
    int count = 0;

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(grid[i][j]=='1'){
                count++;
                dfs(i,j,grid); //We can use dfs() or bfs() anyone here! 
            }
        }
    }

    return count;
}
//Short Code:-----------------------------------end-----------------------------------------


//Long Code:-----------------------------------------------------------------------------
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
//Long Code:-----------------------------------end------------------------------------------
