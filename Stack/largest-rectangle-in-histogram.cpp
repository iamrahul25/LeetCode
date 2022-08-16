class Solution {
public:
    
    vector<int> find_nsr(vector<int> &arr){
        int n = arr.size();

        vector<int> ans(n);
        stack<pair<int,int>> st;

        for(int i=n-1; i>=0; i--){
            if(st.empty()){
                ans[i] = n;
            }

            else if(arr[i]>st.top().first){
                ans[i] = st.top().second;
            }

            else{
                while(!st.empty() and arr[i]<st.top().first){
                    st.pop();
                }

                if(st.empty()){
                    ans[i] = n;
                }
                else{
                    ans[i] = st.top().second;
                }
            }

            //Push element into Stack
            st.push({arr[i],i});
        }

        return ans;
    }


    vector<int> find_nsl(vector<int> &arr){
        int n = arr.size();

        vector<int> ans(n);
        stack<pair<int,int>> st;

        for(int i=0; i<n; i++){
            if(st.empty()){
                ans[i] = -1;
            }

            else if(arr[i]>st.top().first){
                ans[i] = st.top().second;
            }

            else{
                while(!st.empty() and arr[i]<=st.top().first){
                    st.pop();
                }

                if(st.empty()){
                    ans[i] = -1;
                }
                else{
                    ans[i] = st.top().second;
                }
            }

            //Push element into Stack
            st.push({arr[i],i});
        }

        return ans;
    }
    
    
    int largestRectangleArea(vector<int>& heights) {
        
        int n = heights.size();

        //NSR - Nearest Smaller Element to Right (Index)
        vector<int> nsr = find_nsr(heights);

        //NSL - Nearest Smaller Element to Left (Index)
        vector<int> nsl = find_nsl(heights);

        vector<int> width(n);

        //Width
        for(int i=0; i<n; i++){
            width[i] = nsr[i] - nsl[i] -1;
        }

        //Area
        int maxArea = heights[0];
        for(int i=0; i<n; i++){
            int area = width[i] * heights[i];
            maxArea = max(maxArea, area);
        }

        // cout<<"MaxArea: "<<maxArea<<endl;

        return maxArea;
    }
};
