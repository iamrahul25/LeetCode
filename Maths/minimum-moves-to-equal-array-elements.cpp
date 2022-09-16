class Solution {
public:
    int minMoves(vector<int>& nums) {
        int ans = 0;
        
        int minn = *min_element(nums.begin(), nums.end());
        
        for(auto x: nums){
            ans += x - minn;
        }
        
        return ans;
    }
};
