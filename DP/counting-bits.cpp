class Solution {
public:
    
    //Approach 1:   Time: O(N log N)  Space: O(N)
//     vector<int> countBits(int n) {
        
//         vector<int> ans(n+1, 0);
        
//         for(int i=0; i<=n; i++){
//             int c = 0;
//             unsigned a = 1;
            
//             for(int j=0; j<32; j++){
//                 if(i&a) c++;
//                 a = a<<1;
//             }
            
//             ans[i] = c;
//         }
        
//         return ans;
//     }
    
    //Approach 2: (DP)  Time: O(N)   Space: O(N)
    vector<int> countBits(int n){
        vector<int> ans(n+1, 0);
        
        for(int i=1; i<=n; i++){
            ans[i] = ans[i/2] + (i%2);
        }
        
        return ans;
    }
    
};
