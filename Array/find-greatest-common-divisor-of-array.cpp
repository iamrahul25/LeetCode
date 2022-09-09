class Solution {
public:
    //Time: O(N) Space: O(1)
    int findGCD(vector<int>& nums) {
        return __gcd(*min_element(nums.begin(),nums.end()), *max_element(nums.begin(),nums.end()));
    }
};
