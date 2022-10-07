class Solution {
public:
    
    //Approach 2:- Using Set  Time: O(N*N)
    bool checkValid(vector<vector<int>>& matrix){
        int n = matrix.size();
        
        for(int i=0; i<n; i++){
            
            unordered_set<int> row, col;
            
            for(int j=0; j<n; j++){
                row.insert(matrix[i][j]);
                col.insert(matrix[j][i]);
            }
            
            int rl = row.size();
            int cl = col.size();
            int rowsum = accumulate(row.begin(), row.end(), 0);
            int colsum = accumulate(col.begin(), col.end(), 0);
            
            int sum = (n*(n+1))/2;
            
            if(rl==n and cl==n and colsum==sum and rowsum==sum){
                continue;
            }
            else{
                return false;
            }
        }
        
        return true;
        
    }
    
    
    //Brute Force: Sorting -> TLE Error!
//     bool checkValid(vector<vector<int>>& matrix) {
        
//         int n = matrix.size();
        
//         //Vector => 1 to N elements
//         vector<int> vec(n);
        
//         for(int i=1; i<=n; i++){
//             vec[i-1] = i;
//         }
        
//         int count = 0;
        
//         //For checking => Rows
//         for(int i=0; i<n; i++){
//             vector<int> row = matrix[i];
//             sort(row.begin(), row.end());
                
//             if(row==vec){
//                 count++;
//             }
//         }
        

//         //For checking => Column
//         for(int i=0; i<n; i++){
            
//             vector<int> col(n);
            
//             for(int j=0; j<n; j++){
//                 col[j] = matrix[j][i];
//             }
            
//             sort(col.begin(), col.end());
            
//             if(col==vec){
//                 count++;
//             }
//         }
        
//         if(count == 2*n){
//             return true;
//         }
//         else{
//             return false;
//         }
//     }
    
    
};
