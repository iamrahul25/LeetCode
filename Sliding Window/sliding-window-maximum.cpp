class Solution {
public:

    vector<int> maxSlidingWindow(vector<int>& arr, int k) {

        int n = arr.size();
        int i = 0;
        int j = 0;

        deque<int> q;
        vector<int> ans;

        while(j<n){

            while(!q.empty() && arr[j]>q.back()){
                q.pop_back();
            }
            q.push_back(arr[j]);
            
            if(j-i+1==k){
                ans.push_back(q.front());
                if(arr[i]==q.front()) q.pop_front();
                i++;
            }

            j++;
        }

        return ans;
    }
};
