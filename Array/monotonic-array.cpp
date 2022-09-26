class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int n = nums.size();
        int a = 0, b = 0;
        
        for(int i=0; i<n-1; i++){
            if(nums[i]<=nums[i+1]) a++;
            if(nums[i]>=nums[i+1]) b++;
        }
        
        if(a==n-1 or b==n-1) return true;
        return false;
    }
};
