class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int n = nums.size();
        
        int odd = 0;
        int even = n-1;
        
        while(odd<=even){
            
            //Swapping Condition: 
            if(nums[odd]%2!=0 and nums[even]%2==0){
                swap(nums[odd], nums[even]);
            }
            
            if(nums[odd]%2==0){
                odd++;
            }
            
            if(nums[even]%2!=0){
                even--;
            }
        }
        
        return nums;
    }
};
