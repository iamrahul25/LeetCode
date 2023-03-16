class Solution {
public:
    int maxSum(vector<vector<int>> &A){

        int row = A.size();
        int col = A[0].size();

        int maxsum = 0;
        for(int i=0; i<row-2; i++){
            for(int j=0; j<col-2; j++){
                int sum = A[i][j] + A[i][j+1] + A[i][j+2] + A[i+1][j+1]  + A[i+2][j] + A[i+2][j+1] + A[i+2][j+2];
                maxsum = max(sum, maxsum);
            }
        }

        return maxsum;
    }
};
