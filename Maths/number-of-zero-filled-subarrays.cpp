class Solution {
public:
    
    //Approach: Time: O(N) and Space: O(1)
    long long zeroFilledSubarray(vector<int>& nums) {
        
        long long sum = 0;
        long long n = 0;
        
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==0){
                n++;
            }
            
            else{
                sum = sum + ((n*(n+1))/2);
                n = 0;
            }
        }
        
        sum = sum + ((n*(n+1))/2);
        
        return sum;
    }
    
};
