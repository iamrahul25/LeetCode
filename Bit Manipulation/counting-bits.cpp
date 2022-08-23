class Solution {
public:
    
    //Approach 2: Overall Time Complexity : O(N) ----------------------------------
    vector<int> countBits(int n) {
        
        vector<int> ans(n+1);
        ans[0] = 0;
        
        for(int i=0; i<=n; i++){
            ans[i] = ans[i/2] + i%2;
        }
        
        return ans;
    
    }
    
    
    
    
    //Approch 1: Overall Time complexity: O(N logN)---------------------------------
    
//     //Time Complexity O(log n) ----- Bit Masking
//     int count_setbits(int n){
//         int c = 0;
        
//         while(n!=0){
//             if(n&1==1) c++;
//             n = n>>1;
//         }

//         return c;
//     }
    
    
    
//     //Time Complexity--------- O(n) 
//     vector<int> countBits(int n) {
        
//         vector<int> ans(n+1);
        
//         for(int i=0; i<=n; i++){
//             ans[i] = count_setbits(i);
//         }
        
//         return ans;
//     }
};
