class Solution {
public:

    //Graph Problem -> DFS Traversal
    bool dfs(int i, int j, vector<vector<char>> &board,vector<vector<bool>> &visited, int p, string &word){

        //Base Case:
        if(p==word.size()-1){
            return true;
        }

        int n = board.size();
        int m = board[0].size();

        bool b1=false, b2=false, b3=false, b4=false;

        if((i-1>=0) && (board[i-1][j]==word[p+1]) && !visited[i-1][j]){
            visited[i-1][j] = 1;
            b1 = dfs(i-1,j,board,visited,p+1,word);
            visited[i-1][j] = 0;
        } 
        if((i+1<n) && (board[i+1][j]==word[p+1]) && !visited[i+1][j]){
            visited[i+1][j] = 1;
            b2 = dfs(i+1,j,board,visited,p+1,word);
            visited[i+1][j] = 0;
        } 

        if((j-1>=0) && (board[i][j-1]==word[p+1]) && !visited[i][j-1]){
            visited[i][j-1] = 1;
            b3 = dfs(i,j-1,board,visited,p+1,word);
            visited[i][j-1] = 0;
        }
        
        if((j+1<m) && (board[i][j+1]==word[p+1]) && !visited[i][j+1]){
            visited[i][j+1] = 1;
            b4 = dfs(i,j+1,board,visited,p+1,word);
            visited[i][j+1] = 0;
        }

        return b1||b2||b3||b4;
    }

    bool exist(vector<vector<char>>& board, string word) {
        int n = board.size();
        int m = board[0].size();

        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(board[i][j]==word[0]){
                    vector<vector<bool>> visited(n, vector<bool>(m,0));
                    visited[i][j] = 1;
                    if(dfs(i,j,board,visited,0,word)) return true;
                }
            }
        }

        return false;
    }
};
