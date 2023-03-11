class Solution {
public:
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        
        int n = mat.size();
        
        for(int k=0; k<4; k++){
            int c = 0;
            for(int i=0; i<n; i++){
                for(int j=0; j<n; j++){
                    int a, b;
                    if(k==0){a=i, b=j;}
                    else if(k==1){a=n-j-1; b=i;}
                    else if(k==2){a=n-i-1; b=n-j-1;}
                    else{a=j; b=n-i-1;}
                    if(mat[a][b]==target[i][j]) c++;
                }
            }
            if(c==n*n) return true;
        }

        return false;
    }
};
