class Solution {
public:
    
  static bool comp(pair<int,int>a,pair<int,int>b){
      return a.second > b.second;
    }
    
    //Method 1: Using Map and Vector and Sorting.
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        map<int,int>mp;
        
        for(int i = 0;i<n;i++){
            mp[nums[i]]++;
        }
        
        vector<pair<int,int>>v;
        
        for(auto it :mp){
            v.push_back({it.first,it.second}); 
        }
        
        sort(v.begin(),v.end(),comp);
        
        vector<int>ans;
        
        for(int i =0;i<k;i++){
            ans.push_back(v[i].first);
        }
        
        return ans;
       
    }
};
