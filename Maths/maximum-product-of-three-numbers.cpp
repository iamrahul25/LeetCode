class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        
        int n = nums.size();
        sort(nums.begin(), nums.end());
        
        int a = nums[0] * nums[1] * nums[2];
        int b = nums[n-1] * nums[n-2] * nums[n-3];
        int c = nums[0] * nums[1] * nums[n-1];
        
        return max(a,max(b,c));
    }
};
