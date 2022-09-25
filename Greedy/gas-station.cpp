class Solution {
public:
    
    //Greedy Problem
    //Approach 1: Time: O(N) Space: O(1)
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost){
        
        int n = gas.size();
        
        int gas_sum = accumulate(gas.begin(), gas.end(), 0);
        int cost_sum = accumulate(cost.begin(), cost.end(), 0);
        
        if(gas_sum < cost_sum) return -1;
        
        int sum = 0;
        int index = 0;
        
        for(int i=0; i<n; i++){
            sum = sum + gas[i]-cost[i];
            
            if(sum<0){
                sum = 0;
                index = i+1;
            }
        }
        
        return index;
    }
};
