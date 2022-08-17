class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        
        unordered_set<int> ss;
        vector<int> ans;
        
        for(int i=0; i<nums.size(); i++){
            ss.insert(nums[i]);
        }
        
        for(int i=1; i<=nums.size(); i++){
            if(ss.find(i)==ss.end()){
                ans.push_back(i);
            }
        }
        
        return ans;
    }
};
