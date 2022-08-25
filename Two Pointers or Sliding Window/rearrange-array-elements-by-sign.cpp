class Solution {
public:
    
    //Approach 2: Fully Correct   Time: O(N)  Space: O(N)
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);
        
        int even = 0;
        int odd = 1;
        
        for(int i=0; i<n; i++){
            if(nums[i]>=0){
                ans[even] = nums[i];
                even = even + 2;
            }
            
            else{
                ans[odd] = nums[i];
                odd = odd + 2;
            }
        }
        
        return ans;
    
    }
    
    
    
    
    //Approach 1: (Partially Correct)..... Time: O(N)  Space: O(1) --> Try to complete this.
//     vector<int> rearrangeArray(vector<int>& nums) {
        
//         int n = nums.size();
        
//         int even = 0;
//         int odd = 1;
        
//         while(even<n and odd<n){
            
//             if(nums[even]>0){
//                 even = even + 2;
//                 continue;
//             }
            
//             if(nums[odd]<0){
//                 odd = odd + 2;
//                 continue;
//             }
            
//             if(nums[even]<0 and nums[odd]>0){
//                 cout<<nums[even]<<" "<<nums[odd]<<endl;
//                 swap(nums[even], nums[odd]);
                
//             }
            
//         }
        
//         return nums;
//     }
};
