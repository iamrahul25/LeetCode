class Solution {
public:
    
    //We have to Return => Maximum Row Sum-----------
    //Approach 1:
    int maximumWealth(vector<vector<int>>& accounts) {
        int n = accounts.size();
        int m = accounts[0].size();
        
        int ans = 0;
        
        for(int i=0; i<n; i++){
            
            int sum = 0;
            for(int j=0; j<m; j++){
                sum+= accounts[i][j];
            }
            
            ans = max(ans, sum);
        }
        
        return ans;
    }
    
    //Approach 2: Using STL Functions-----------------
//     int maximumWealth(vector<vector<int>>& accounts){
        
//         int ans = 0;
        
//         for(auto x: accounts){
//             int sum = accumulate(x.begin(), x.end(), 0);
//             ans = max(ans, sum);
//         }
        
//         return ans;
//     }
    
};
