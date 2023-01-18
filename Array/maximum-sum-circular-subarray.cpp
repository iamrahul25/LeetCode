class Solution {
public:

    //Time: O(N) Space: O(1)
    int maxSubarraySumCircular(vector<int>& nums) {
        int n = nums.size();

        int maxsum = nums[0];
        int curmax = 0;

        int minsum = -nums[0];
        int curmin = 0;

        int totalsum = 0;
        int count = 0;

        for(int i=0; i<n; i++){
            curmax = max(nums[i], curmax + nums[i]);
            maxsum = max(maxsum, curmax);

            curmin = max(-nums[i], curmin - nums[i]);
            minsum = max(minsum, curmin);

            totalsum = totalsum + nums[i];

            if(nums[i]<0) count++;
        }

        if(count==n) return maxsum;
        return max(totalsum + minsum, maxsum);
    }
};
