class Solution {
public:
    
    bool isSafe(int n, int row, int col, vector <string> board){
    
        //Row Column
        int r = row;
        int c = col;

        //Upper Diagonal
        while (r >= 0 && c >= 0) {
            if (board[r][c] == 'Q') return false;
            r--;
            c--;
        }

        c = col;
        r = row;
        //Horizontal Line
        while (c >= 0) {
            if (board[r][c] == 'Q') return false;
            c--;
        }

        r = row;
        c = col;
        //Lower Diagonal
        while (r < n && c >= 0) {
            if (board[r][c] == 'Q') return false;
            r++;
            c--;
        }

        return true;
    }
    
    
    void nQueen_recursion(int n, int column, vector<string> &board, vector<vector<string>> &all){

        //Base Case
        if(column==n){
            all.push_back(board);
            return;
        }


        for(int i=0; i<n; i++){
            if(isSafe(n,i,column,board)){
                board[i][column] = 'Q';
                nQueen_recursion(n, column+1, board, all);

                //Backtracking Condition
                board[i][column] = '.';
            }
        }

    }
    
    
    
    
    vector<vector<string>> solveNQueens(int n) {
        //Creating Empty Board of size N x N.
        vector<string> board(n, string(n,'.'));

        vector<vector<string>> all_solutions;
        nQueen_recursion(n, 0, board, all_solutions);

        return all_solutions;
    }
};
