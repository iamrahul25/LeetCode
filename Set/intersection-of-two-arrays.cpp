class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2){
        
        multiset<int> s;
        
        for(auto x: nums1){
            s.insert(x);
        }
        
        vector<int> ans;
        
        for(int i=0; i<nums2.size(); i++){
            auto index = s.find(nums2[i]);
            if(index!=s.end()){
                ans.push_back(*index);
                s.erase(nums2[i]);
            }
        }
        
        return ans;
        
    }
};
