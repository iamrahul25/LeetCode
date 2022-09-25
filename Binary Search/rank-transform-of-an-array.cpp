class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        
        int n = arr.size();
        set<int> st;
        
        for(int i=0; i<arr.size(); i++){
            st.insert(arr[i]);
        }
        
        vector<int> vec(st.begin(), st.end());
        vector<int> ans(n);
        
        for(int i=0; i<n; i++){
            int rank = lower_bound(vec.begin(), vec.end(), arr[i]) - vec.begin(); 
            ans[i] = rank+1;
        }
        
        return ans;
    }
};
