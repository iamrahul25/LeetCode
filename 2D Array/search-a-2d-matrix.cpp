class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int column = matrix[0].size();

        int flag = 0;

        for(int i=0; i<row; i++){
            if(binary_search(matrix[i].begin(), matrix[i].end(), target)){
                // cout<<"Found"<<endl;
                flag = 1;
                break;
            }
        }

        return flag;
    }
};
