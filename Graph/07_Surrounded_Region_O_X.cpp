class Solution {
public:
    
    //Approach 1: BFS Traversal 
    void solve(vector<vector<char>>& board) {
        int m = board.size();
        int n = board[0].size();
        
        vector<vector<char>> grid = board;
        
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if((board[i][j]=='O') and (i==0 or j==0 or i==m-1 or j==n-1) ){
                    bfs(i,j,grid);
                }
            }
        }
        
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(grid[i][j]=='O'){
                    board[i][j] = 'X';
                }
            }
        }
    }
    
    void bfs(int i, int j, vector<vector<char>>&board){
        
        board[i][j] = 'A';
        
        int m = board.size();
        int n = board[0].size();
        
        queue<pair<int,int>> q;
        q.push({i,j});
        
        while(!q.empty()){
            int a = q.front().first;
            int b = q.front().second;
            
            q.pop();
            
            if((a+1)<m and board[a+1][b]=='O'){
                board[a+1][b] = 'A';
                q.push({a+1,b});
            }
            if((a-1)>=0 and board[a-1][b]=='O'){
                board[a-1][b] = 'A';
                q.push({a-1,b});
            }
            if((b+1)<n and board[a][b+1]=='O'){
                board[a][b+1] = 'A';
                q.push({a,b+1});
            }

            if((b-1)>=0 and board[a][b-1]=='O'){
                board[a][b-1] = 'A';
                q.push({a,b-1});
            }
        }
    }
};
