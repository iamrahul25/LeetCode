class Solution {
public:
    int specialArray(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int maxx = nums[n-1];

        for(int i=0; i<=maxx; i++){
            int p = lower_bound(nums.begin(), nums.end(), i) - nums.begin();
            if(i==n-p) return i;
        }

        return -1;
    }
};
