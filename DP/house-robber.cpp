class Solution {
public:
    
    int rob_recursion(int i, vector<int> &arr, vector<int> &dp){
        if(i>=arr.size()){
            return 0;
        }

        if(dp[i]!=-1){
            return dp[i];
        }

        //Can take 2 Step 
        int two = arr[i] + rob_recursion(i+2, arr, dp);

        //Can take 3 Step
        int three = arr[i] + rob_recursion(i+3,arr, dp);

        return dp[i] = max(two, three);
        }
    
    int rob(vector<int>& nums) {
        
        vector<int> dp(nums.size(), -1);

        int index0 = rob_recursion(0, nums, dp);
        int index1 = rob_recursion(1, nums, dp);

        int ans = max(index0,index1);
        
        return ans;
    }
};
