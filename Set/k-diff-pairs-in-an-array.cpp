class Solution {
public:
    
    //Optimise Later: 
    
    //Brute Force: Time: O(N^2)  Space: O(N)
    int findPairs(vector<int>& nums, int k) {
        
        set<pair<int,int>> st;
        
        int n = nums.size();
        int count = 0;
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                if(abs(nums[i]-nums[j])==k){
                    
                    int a = min(nums[i], nums[j]);
                    int b = max(nums[i], nums[j]);
                    st.insert({a,b});
                }
            }
        }
        
        return st.size();
        
    }
};
