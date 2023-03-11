class Solution {
public:

    //Sliding Window: Time: O(N) Space: O(1)
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int i = 0;
        int ans = 0;
        int p = 1;

        for(int j=0; j<nums.size(); j++){
            p = p * nums[j];
            while(p>=k and i<=j){
                p = p / nums[i];
                i++;
            }
            ans = ans + (j-i+1);
        }

        return ans;
    }
};
