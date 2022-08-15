class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();

        vector<int> ans(n);
        stack<pair<int,int>> st;

        for(int i=n-1; i>=0; i--){
            if(st.empty()){
                ans[i] = 0;
            }

            else if(temperatures[i]<st.top().first){
                ans[i] = 1;
            }

            else{
                while(!st.empty() and temperatures[i]>=st.top().first){
                    st.pop();
                }

                if(st.empty()){
                    ans[i] = 0;
                }
                else{
                    ans[i] = st.top().second - i;
                }
            }

            //Push element into Stack
            st.push({temperatures[i],i});
        }

        return ans;
    }
};
