class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int m = mat.size();
        int n = mat[0].size();

        if(m*n == r*c){
            //Creating a Temporary 1-D Vector
            vector<int> t_vector;

            //Storing all Elements in Temp vector.
            for(int i=0; i<mat.size(); i++){
                for(int j=0; j<mat[i].size(); j++){
                    t_vector.push_back(mat[i][j]);
                }
            }

            //Creating 2D Matrix
            vector<vector<int>> new_matrix;

            int x = 0;
            for(int i=0; i<r; i++){

                vector <int> temp;
                for(int j=0; j<c; j++){
                    temp.push_back(t_vector[x]);
                    x++;
                }

                new_matrix.push_back(temp);
            }

            return new_matrix;
        }

        else{

            return mat;
        }
    }
};
