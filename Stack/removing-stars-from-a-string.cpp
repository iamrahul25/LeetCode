class Solution {
public: 

    //Time: O(N)  and Space: O(N)
    string removeStars(string s) {
        int n = s.size();
        stack<char> st;

        for(int i=0; i<n; i++){
            if(s[i]=='*' && !st.empty()) st.pop();
            else if(s[i]!='*') st.push(s[i]);
        }

        string ans = "";
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }

        reverse(ans.begin(), ans.end());

        return ans;
    }
};
