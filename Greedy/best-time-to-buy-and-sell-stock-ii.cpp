class Solution {
public:
    
    //Greedy Approach. Time Complexity: O(N)  and  Space Complexity: O(1) Complexity. 
    int maxProfit(vector<int>& prices) {
        
        int res = 0; 
        int n = prices.size();

        for(int i=1; i<n; i++){
            res = res + max(prices[i]-prices[i-1], 0);
        }
        
        return res;
    }
};
