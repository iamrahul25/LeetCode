class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        
        unordered_map<int,int> mpp;
        
        int n = nums.size();
        
        for(int i=0; i<n; i++){
            mpp[nums[i]]++;
        }
        
        
        vector<int> ans;
        for(auto e: mpp){
            if(e.second==2){
                ans.push_back(e.first);
            }
        }
        
        return ans;
    }
};
