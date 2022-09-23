class Solution {
public:
    int findShortestSubArray(vector<int>& nums){
        
        unordered_map<int, tuple<int,int,int>> mp;
        
        int n = nums.size();
        
        for(int i=0; i<nums.size(); i++){
            if(mp.find(nums[i])==mp.end()){
                mp[nums[i]] = {i,i,1};
            }
            else{
                tuple<int,int,int> t = mp[nums[i]];
                mp[nums[i]] = {get<0>(t), i, get<2>(t)+1};
            }
        }
        
        //Finding Max frequency element. 
        int maxfreq = 0;
        for(auto x: mp){
            tuple<int,int,int> t = x.second;
            maxfreq = max(maxfreq, get<2>(t));
        }
        

        int minlen = n;
        for(auto x: mp){
            
            tuple<int,int,int> t = x.second;
            // cout<<x.first<<" : "<<get<0>(t)<<" : "<<get<1>(t)<<" : "<<get<2>(t)<<endl;
            
            if(get<2>(t)==maxfreq){
                int len = get<1>(t) - get<0>(t) + 1;
                minlen = min(minlen, len);
            }
        }
        
        return minlen;
        
        
    }
};
