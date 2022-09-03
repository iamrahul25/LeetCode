class Solution {
public:
    
    //Time: O(N) and Space: O(1)
    int pivotIndex(vector<int>& nums) {
        int sum = 0;
        int cursum = 0;
        
        int index = -1;
        
        //Finding Total => Sum
        for(int i=0; i<nums.size(); i++){
            sum = sum + nums[i];
        }
        
        
        for(int i=0; i<nums.size(); i++){
            
            if(cursum == sum - cursum - nums[i]){
                return i;
            }
            
            cursum = cursum + nums[i];
        }
        
        return index;
    
    }
};
