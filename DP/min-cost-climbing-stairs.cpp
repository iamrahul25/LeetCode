class Solution {
public:
    
    //Recursive DP / Memoization / Top Down Approach
    int minCost(int i, vector<int> &arr, vector<int> &dp){
        
        if(i>=arr.size()){
            return 0;
        }

        if(dp[i]!=-1){
            return dp[i];
        }

        int left = arr[i] + minCost(i+1, arr, dp);
        int right = arr[i] + minCost(i+2, arr, dp);

        return dp[i] = min(left, right);
    }
    
    
    int minCostClimbingStairs(vector<int>& cost) {
        
        int n = cost.size();

        vector<int> dp(n+1, -1);

        int index0 = minCost(0,cost, dp);
        int index1 = minCost(1,cost, dp);

        int ans = min(index0,index1);

        return ans;
    }
};
