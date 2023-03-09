class Solution {
public:
    vector<int> partitionLabels(string s) {
        vector<int> arr(26, 0);
        int n = s.size();
        for(int i=0; i<n; i++){
            arr[s[i]-'a'] = i;
        }

        int maxx = 0;
        vector<int> ans;
        for(int i=0; i<n; i++){
            maxx = max(maxx, arr[s[i]-'a']);
            if(i==maxx){
                ans.push_back(i+1);
            }
        }

        for(int i=ans.size()-1; i>=1; i--){
            ans[i] = ans[i] - ans[i-1];
        }

        return ans;
    }
};
