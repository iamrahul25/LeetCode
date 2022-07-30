class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();

        int maxx = prices[n - 1];
        int ans = 0;

        for(int i=n-1; i>=0; i--){

            maxx = max(prices[i], maxx);
            ans = max(maxx-prices[i], ans);

            // cout<<prices[i]<<" "<<maxx<<" "<<ans<<endl;
        }

        return ans;
    }
};
