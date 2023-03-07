class Solution {
public:
    //Sliding Window Problem: 
    int longestSubarray(vector<int>& nums) {
        int i = 0;
        int j = 0;
        int maxlen = 0;
        int n = nums.size();
        int x = 1;

        while(j<n){
            if(x==1 and nums[j]==0){
                x = 0;
                j++;
            }
            else if((x==0 and nums[j]==1) || (x==1 and nums[j]==1)){
                j++;
            }
            else{
                if(nums[i]==0) x=1;
                i++;
            }
            maxlen = max(maxlen, j-i);
        }

        return maxlen-1;
    }
};
