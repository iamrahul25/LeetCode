class Solution {
public:
    int maximumGap(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        
        int maxx = 0;
        for(int i=0; i<n-1; i++){
            maxx = max(maxx, abs(nums[i]-nums[i+1]));
        }
        
        return maxx;
    }
};
