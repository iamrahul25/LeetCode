class Solution {
public:
    
    //Greedy Approach. Time: O(N)  Space: O(1)
    int maxProfit(vector<int>& prices) {
        
        int res = 0;
        
        for(int i=1; i<prices.size(); i++){
            res = res + max(prices[i]-prices[i-1], 0);
        }
        
        return res;
    }
};
