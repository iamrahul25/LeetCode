class Solution {
public:
    
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int n = nums.size();
        
        int even = 0;
        int odd = 1;
        
        while(even<n and odd<n){
            
            if(nums[even]%2==0){
                even = even + 2;
                continue;
            }
            
            if(nums[odd]%2==1){
                odd = odd + 2;
                continue;
            }
            
            if(nums[even]%2==1 and nums[odd]%2==0){
                swap(nums[even], nums[odd]);
            }
            
        }
        
        return nums;
        
    }
};
