class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {

        vector<int> ans;
        
        int count = 0;
        int first_index = 0;
        
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==target){
                count++;
            }
            
            if(nums[i]<target){
                first_index++;
            }
        }
        
        
        for(int i=0; i<count; i++){
            ans.push_back(first_index + i);
        }
        
        return ans;
    }
};
