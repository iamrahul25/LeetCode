class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        int n = score.size();
        vector<string> ans(n);
        
        vector<pair<int,int>> v;
        
        for(int i=0; i<n; i++){
            v.push_back({score[i],i});
        }
        
        sort(v.begin(), v.end(),  greater<pair<int,int>>());
        
        // for(auto x: v){
        //     cout<<x.first<<" "<<x.second<<endl;
        // }
        
        vector<string> medals = {"Gold Medal", "Silver Medal", "Bronze Medal"};
        
        for(int i=0; i<min(n,3); i++){
            ans[v[i].second] = medals[i];
        }
        
        for(int i=3; i<n; i++){
            ans[v[i].second] = to_string(i+1);
        }
        
        return ans;
        
    }
};
