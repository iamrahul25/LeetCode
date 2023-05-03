class Solution {
public:
    //Set Problem => Return  (A-B) and (B-A): Time: O(N) Space: O(N)
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> st1(nums1.begin(), nums1.end());
        unordered_set<int> st2(nums2.begin(), nums2.end());

        vector<int> ans1;
        vector<int> ans2;

        for(auto x: st1){
            if(st2.find(x)==st2.end()) ans1.push_back(x);
        }

        for(auto x: st2){
            if(st1.find(x)==st1.end()) ans2.push_back(x);
        }

        return {ans1, ans2};
    }
};
