class Solution {
public:
    //Stack Problem: Time: O(N) Space: O(N)
    string removeDuplicates(string s) {
        stack<char> st;
        int n = s.size();

        for(int i=0; i<n; i++){

            if(st.empty()){
                st.push(s[i]);
            }

            else if(s[i]==st.top()){
                int top = s[i];
                while(!st.empty() and top==st.top()){
                    st.pop();
                }
            }

            else{
                st.push(s[i]);
            }
        }

        int len = st.size();
        string ans(len, ' ');
        int j = len-1;
        while(!st.empty()){
            ans[j--] = st.top();
            st.pop();
        }

        return ans;
    }
};
