class Solution {
public:
    //Sliding Window Problem: Variable Length
    int longestOnes(vector<int>& nums, int k) {
        int n = nums.size();
        int i = 0;
        int j = 0;

        int maxlen = 0;

        while(j<n){
            
            if(k>=0){
                if(nums[j]==0) k--;
                j++;
            }
            else{
                if(nums[i]==0) k++;
                i++;
            }

            if(k>=0) maxlen = max(maxlen, j-i);
        }

        return maxlen;
    }
};
