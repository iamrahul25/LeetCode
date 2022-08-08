class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        
        vector<int> sorted = nums;
        sort(sorted.begin(), sorted.end());
        
        int n = nums.size();
        
        vector<int> ans(n);
        
        for(int i=0; i<n; i++){
            
            auto index = lower_bound(sorted.begin(), sorted.end(), nums[i]) - sorted.begin();
            
            ans[i] = index;
            
        }
        
        return ans;
        
    }
};
