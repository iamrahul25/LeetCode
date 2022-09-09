class Solution {
public:
    
    //Approach 2: Time: O(N)  Space: O(1) --- Do Later. 
    vector<int> buildArray(vector<int>& nums) {
        int n = nums.size();
        
        for(int i=0; i<n; i++){
            nums[i] = nums[i] + n*(nums[nums[i]]%n);
        }
        
        for(int i=0; i<n; i++){
            nums[i] = nums[i]/n;
        }
        
        return nums;
    }
    
    //Approach 1: Time: O(N)   Space: O(N)
    
//     vector<int> buildArray(vector<int>& nums) {
//         int n = nums.size();
//         vector<int> ans(n);
        
//         for(int i=0; i<n; i++){
//             ans[i] = nums[nums[i]];
//         }
        
//         return ans;
//     }
    
};
