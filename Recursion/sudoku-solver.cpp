class Solution {
public:
    
    bool isValid(int row, int col, char c, vector<vector<char>> &board){

        for (int i = 0; i < 9; i++) {
            if (board[i][col] == c) return false;

            if (board[row][i] == c) return false;

            if (board[3 * (row / 3) + i / 3][3 * (col / 3) + i % 3] == c) return false;
        }

        return true;
    }
    
    bool sudoku_recursion(int n, vector<vector<char>> &board){

        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){

                if(board[i][j]=='.'){

                    //For Putting and Checking if Number is Correct. 
                    for(char c='1'; c<='9'; c++){

                        if(isValid(i,j,c,board)){
                            board[i][j]=c;

                            if(sudoku_recursion(n,board)){
                                return true;
                            }
                            else{
                                board[i][j] = '.';
                            }

                        }
                    }

                    return false;
                }

            }
        }

        return true;
    }
    
    
    void solveSudoku(vector<vector<char>>& board) {
        sudoku_recursion(board.size(), board);
    }
};
