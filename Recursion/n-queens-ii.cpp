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
    
    
    void nQueen_recursion(int n, int column, vector<string> &board, int &count){

        //Base Case
        if(column==n){
            count++;
            return;
        }


        for(int i=0; i<n; i++){
            if(isSafe(n,i,column,board)){
                board[i][column] = 'Q';
                nQueen_recursion(n, column+1, board, count);

                //Backtracking Condition
                board[i][column] = '.';
            }
        }

    }
    
    
    int totalNQueens(int n) {
        
        //Creating Empty Board of size N x N.
        vector<string> board(n, string(n,'.'));

        int count = 0;
        nQueen_recursion(n, 0, board, count);

        return count;
    }
};
