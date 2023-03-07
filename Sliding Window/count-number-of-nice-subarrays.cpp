class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        
        //Problem - Subarray with sum k: 
        unordered_map<int, int> mpp;
        int presum = 0;
        int count = 0;
        
        mpp[presum] = 1;
        
        for(int i=0; i<nums.size(); i++){
            nums[i] = nums[i]%2;
            presum = presum + nums[i];
            
            if(mpp.find(presum - k)!=mpp.end()){
                count = count + mpp[presum-k];
            }
            
            mpp[presum]++;
        }

        return count;
    }
};
