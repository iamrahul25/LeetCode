class Solution {
public:
    
    
    //Approach 1: Using Hash Map  Time: O(N)  Space: O(N)
    int sumOfUnique(vector<int>& nums) {
        unordered_map<int,int> mp;
        
        for(auto x: nums){
            mp[x]++;
        }
        
        int sum = 0;
        for(auto x: mp){
            if(x.second==1){
                sum = sum + x.first;
            }
        }
        
        return sum;
    }
};
