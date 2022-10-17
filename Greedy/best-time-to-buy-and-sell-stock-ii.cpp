class Solution {
public:
    
    //Greedy Approach. Time: O(N)  and  Space: O(1)
    int maxProfit(vector<int>& prices) {
        
        int res = 0; 
        int n = prices.size();

        
        for(int i=1; i<n; i++){
            res = res + max(prices[i]-prices[i-1], 0);
        }
        
        return res;
    }
};
