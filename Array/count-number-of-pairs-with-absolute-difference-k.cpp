class Solution {
public:
    
    
    //Approach 1: Brute Force: Time: O(N^2)
    int countKDifference(vector<int>& nums, int k) {
        int count = 0;
        
        int n = nums.size();
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                if(abs(nums[i]-nums[j])==k){
                    count++;
                }
            }
        }
        
        return count;
    }
};
