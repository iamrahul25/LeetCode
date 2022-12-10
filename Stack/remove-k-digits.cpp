class Solution {
public:
    string removeKdigits(string num, int k) {
        string s = num;
        int n = s.size();

        if(k>=n) return "0";
        if(k==0) return num;

        string ans = "";
        stack<char> st;
        st.push(s[0]);

        for(int i=1; i<n; i++){
            while(k!=0 and !st.empty() and s[i]<st.top()){
                st.pop();
                k--;
            }

            st.push(s[i]);

            //Removing Trailing Zeros
            if(st.size()==1 and st.top()=='0'){
                st.pop();
            }
        }

        //Removing Ending Values --> Increasing
        while(k!=0 and !st.empty()){
            k--;
            st.pop();
        }

        //Storing Values in String 
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }

        reverse(ans.begin(), ans.end());
        if(ans.size()==0) return "0";

        return ans;
    }
};
