class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        int product = 1;
        
        vector<int> ans(n);
        
        int zero = 0;
        for(int i=0; i<n; i++){
            if(nums[i]!=0){
                product = product * nums[i];
            }
            else{
                zero++;
            }
        }
        
        
        for(int i=0; i<n; i++){
            
            if(nums[i]==0){
                if(zero!=1){
                    ans[i] = 0;
                } 
                else{
                    ans[i] = product;
                } 
            }
            
            else{
                if(zero!=0){
                    ans[i] = 0;
                } 
                else{
                    ans[i] = (product/nums[i]);
                } 
            }
        }
        
        
        return ans;
        
    }
};
