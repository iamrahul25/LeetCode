class Solution {
public:
    //Time: O(N) Space: O(N)
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        int n = pushed.size();
        int j=0;

        stack<int> st;

        for(int i=0; i<n; i++){
            st.push(pushed[i]);

            while(!st.empty() and st.top()==popped[j]){
                st.pop();
                j++;
            }
        }

        if(st.size()==0 and j==n) return true;
        return false;
    }
};
