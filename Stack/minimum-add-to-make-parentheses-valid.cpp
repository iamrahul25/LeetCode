class Solution {
public:
    int minAddToMakeValid(string s) {
        int n = s.size();
        stack<char> st;

        for(int i=0; i<n; i++){
            if(s[i]==')'){
                if(st.empty()) st.push(s[i]);
                else if(st.top()=='(') st.pop();
                else st.push(s[i]);
            }
            else{
                st.push(s[i]);
            }
        }
        return st.size();
    }
};
