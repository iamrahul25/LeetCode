class Solution {
public:
    //Time: O(N) Space: O(1)
    int removeDuplicates(vector<int>& nums) {
        int j = 1;
        int n = nums.size();
        if(n<=2) return n;

        for(int i=2; i<n; i++){
            if(nums[i]==nums[j] && nums[i]==nums[j-1]){
                continue;
            }
            else{
                nums[j+1] = nums[i];
                j++;
            }
        }
        return j+1;
    }
};
