class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        int row = mat.size();
        int col = mat[0].size();

        //Diagonals --> From Left to Right.
        for(int i=0; i<col; i++){

            int a = 0;
            int b = i;

            vector<int> v;
            while(a<row and b<col){
                v.push_back(mat[a][b]);
                a++;
                b++;
            }


            //Sorting Diagonal
            sort(v.begin(), v.end());

            //Updating Original Matrix
            a = 0;
            b = i;

            while(a<row and b<col){
                mat[a][b] = v[a];
                a++;
                b++;
            }
        }

        //Diagonals --> From Top to Bottom
        for(int i=1; i<row; i++){
            int a = i;
            int b = 0;

            vector<int> v;
            while(a<row and b<col){
                v.push_back(mat[a][b]);
                a++;
                b++;
            }

            //Sorting Diagonal
            sort(v.begin(), v.end());

            //Updating Original Matrix
            a = i;
            b = 0;

            while(a<row and b<col){
                mat[a][b] = v[b];
                a++;
                b++;
            }
        }

        return mat;
    }
};
