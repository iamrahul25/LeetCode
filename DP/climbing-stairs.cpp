class Solution {
public:
    int climbStairs(int n) {
        
        vector<int> dp(n+1,0);
        
        for(int i=1; i<=n; i++){
            if(i==1 or i==2){
                dp[i] = i;
            }
            
            else{
                dp[i] = dp[i-1] + dp[i-2];
            }
        }
        
        return dp[n];
    }
};
