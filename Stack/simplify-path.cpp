class Solution {
public:

    //Time: O(N) Space: O(N)  Approach: Using Stack Data Structure. 
    string simplifyPath(string path) {
        int n = path.size();
        stack<string> st;
        string s;

        for(int i=0; i<n; i++){
            if(path[i]!='/') s.push_back(path[i]);

            else{
                if(s.size()!=0 and s!="." and s!="..") st.push(s);
                else if(s==".." and st.size()>0) st.pop();
                string a; s = a; //Empty String
            }
        }

        //One Last String------------------------
        if(s.size()!=0 and s!="." and s!="..") st.push(s);
        else if(s==".." and st.size()>0) st.pop();

        //Reversing Stack: 
        stack<string> stk;
        while(st.size()>0){
            stk.push(st.top());
            st.pop();
        }

        string ans;
        //Adding / between paths
        while(stk.size()>0){
            ans = ans + '/';
            ans = ans + stk.top();
            stk.pop();
        }

        if(ans.size()==0) return "/";
        return ans;
    }
};
