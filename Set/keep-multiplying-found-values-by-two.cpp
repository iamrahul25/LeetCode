class Solution {
public:
    
    //Time: O(N)  Space: O(N)
    int findFinalValue(vector<int>& nums, int original) {
        
        unordered_set<int> st;
        
        for(int i=0; i<nums.size(); i++){
            st.insert(nums[i]);
        }
        
        while(st.find(original)!=st.end()){
            original = original * 2;
        }
        
        return original;
    }
};
