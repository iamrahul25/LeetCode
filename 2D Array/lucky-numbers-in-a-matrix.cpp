class Solution {
public:
    
    //Time: O(3*(N*M))  Space: O(N+M)
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        
        cout<<n<<m<<endl;
        
        vector<int> rowmin(n);
        vector<int> colmax(m);
        
        //Max Row values
        for(int i=0; i<n; i++){
            
            int rmin = INT_MAX;
            for(int j=0; j<m; j++){
                rmin = min(rmin, matrix[i][j]);
            }
            
            rowmin[i] = rmin;
        }
        
        //Max Column values
        for(int j=0; j<m; j++){
            
            int cmax = INT_MIN;
            for(int i=0; i<n; i++){
                cmax =  max(cmax, matrix[i][j]);
            }
            
            colmax[j] = cmax;
        }
        
        
        vector<int> ans;
        
        //Checking if they are equal to rowmin and colmax value;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(matrix[i][j]==rowmin[i] and matrix[i][j]==colmax[j]){
                    ans.push_back(matrix[i][j]);
                }
            }
        }
        
        
        return ans;
        
    }
};
