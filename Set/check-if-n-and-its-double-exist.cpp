class Solution {
public:

    //Time: O(N) Space: O(N)
    bool checkIfExist(vector<int>& arr) {
        unordered_set<int> st;
        int z = 0;
        for(auto x: arr){
            st.insert(x);
            if(x==0) z++;
        }

        if(z>=2) return true;

        for(auto x: arr){
            if(x!=0 and st.find(2*x)!=st.end()) return true;
        }

        return false;
    }
};
