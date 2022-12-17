class Solution {
public:
    //Time: O(N)  Space: O(N)
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> mp;
        unordered_set<int> st;

        for(auto x: arr) mp[x]++;
        for(auto x: mp) st.insert(x.second);

        if(st.size()==mp.size()) return true;

        return false;
    }
};
