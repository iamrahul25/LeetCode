class Solution {
public:

    //Approach 1: Using Extra Space: Time: O(N*NumRows) Space: O(N*NumRows)
    string convert(string s, int numRows){

        int n = s.size();
        vector<vector<char>> grid(numRows, vector<char>(n, '-'));

        int row=0,col=0;
        int x = 0;

        while(x<n){
            for(int i=0; i<numRows; i++){
                if(x<n) grid[row++][col] = s[x++];
            }
            row = numRows - 1;

            for(int i=0; i<numRows-2; i++){
                if(x<n) grid[--row][++col] = s[x++];
            }
            col++;
            row = 0;
        }

        int idx = 0;
        string ans(n, ' ');
        for(int i=0; i<numRows; i++){
            for(int j=0; j<n; j++){
                if(grid[i][j]!='-') ans[idx++] = grid[i][j];
                // cout<<grid[i][j]<<" ";
            }
            // cout<<endl;
        }

        return ans;
    }
};
