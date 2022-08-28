class Solution {
public:
    long long getDescentPeriods(vector<int>& prices) {
        
        int n = prices.size();
        
        long long sum = n;
        long long c = 0;
        
        for(int i=0; i<n-1; i++){
            if(prices[i]==prices[i+1]+1){
                c++;
            }
            else{
                sum = sum + ((c*(c+1))/2);
                c = 0;
            }
        }
        
        sum = sum + ((c*(c+1))/2);

        return sum;
    }
};
