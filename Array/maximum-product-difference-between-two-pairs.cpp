class Solution {
public:
    
    //Approach 2: Time: O(1)  Space: O(1)
    
    
    
    //Approach 1: Time: O(NlogN) Space: O(1)
    int maxProductDifference(vector<int>& nums) {
        
        sort(nums.begin(), nums.end());
        int n = nums.size();
        
        int a = nums[n-1]*nums[n-2];
        int b = nums[0] * nums[1];
        
        return a-b;
        
    }
};
