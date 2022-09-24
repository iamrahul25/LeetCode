class Solution {
public:
    int numMagicSquaresInside(vector<vector<int>>& grid) {
        
        int row = grid.size();
        int col = grid[0].size();
        
        int count = 0;
        
        for(int i=0; i<row-2; i++){
            for(int j=0; j<col-2; j++){
                if(magic_square(i,j,grid)){
                    count++;
                }
            }
        }
        
        return count;
    }
    
    
    bool magic_square(int a, int b, vector<vector<int>>& grid){
        
        int s[3][3];
        set<int> st;
        
        for(int i=0; i<3; i++){
            for(int j=0; j<3; j++){
                s[i][j] = grid[a+i][b+j];
                st.insert(s[i][j]);
            }
        }
        
        //9 Unique Element
        if(st.size()!=9) return false;
        
        //Checking Numbers from 1 to 9. 
        int n = 1;
        for(auto x: st){
            if(x!=n) return false;
            n++;
        }
        
        
        //Checking R1, R2, R3, C1, C2, C3, D1, D2 Sum. 
        int SUM[8] = {0};
        
        //Rows
        SUM[0] = s[0][0] + s[0][1] + s[0][2];
        SUM[1] = s[1][0] + s[1][1] + s[1][2];
        SUM[2] = s[2][0] + s[2][1] + s[2][2];
        
        //Column
        SUM[3] = s[0][0] + s[1][0] + s[2][0];
        SUM[4] = s[0][1] + s[1][1] + s[2][1];
        SUM[5] = s[0][2] + s[1][2] + s[2][2];
        
        //Diagonal
        SUM[6] = s[0][0] + s[1][1] + s[2][2];
        SUM[7] = s[0][2] + s[1][1] + s[2][0];
        
        
        for(int i=0; i<8; i++){
            if(SUM[i]!=15) return false;
        }

        return true;
    }
};
