class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<string> hash_set;

        string row = "", column = "", box = ""; 
        int box_index;

        int total_element = 0;
        for(int i=0; i<9; i++){
            for(int j=0; j<9; j++){

                if(board[i][j]!='.'){
                    box_index = ((i/3)*3) + (j/3);

                    row = row +  board[i][j] + "row" + to_string(i); 
                    column = column +  board[i][j] + "column" + to_string(j); 
                    box = box +  board[i][j] + "box" + to_string(box_index); 

                    hash_set.insert(row);
                    hash_set.insert(column);
                    hash_set.insert(box);

                    total_element = total_element + 3;

                    row="", column="", box="";
                }
            }
        }

        // print_set(hash_set);

        if(total_element == hash_set.size()){
            return 1;
        }

        return 0;
    }
};
