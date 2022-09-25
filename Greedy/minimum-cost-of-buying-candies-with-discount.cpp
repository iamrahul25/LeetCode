class Solution {
public:
    
    //Greedy Problem  Time: O(NlogN)  Space: O(1)
    int minimumCost(vector<int>& cost) {
        
        int n = cost.size();
        sort(cost.begin(), cost.end());
        
        int total = 0;
        for(int i = n-1; i>=0; i--){
            if((n-i)%3!=0){
                total = total + cost[i];
            }
        }
        
        return total;
    }
};
