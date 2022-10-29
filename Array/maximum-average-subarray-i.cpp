class Solution {
public:
    //Time: O(N)  Space: O(1)  ---> Sliding Window Problem / Array
    double findMaxAverage(vector<int>& nums, int k) {
        
        int n = nums.size();
        int sum = 0;
        for(int i=0; i<k; i++){
            sum = sum + nums[i];
        }
        
        double avg = sum/(k*1.0);
        
        for(int i=k; i<n; i++){
            sum = sum + nums[i] - nums[i-k];
            avg = max(avg, (sum/(k*1.0)));
        }
        
        return avg;
    }
};
