class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        
        unordered_map<int,int> mp;
        
        int sum = 0;
        int maxlen = 0;
        
        for(int i=0; i<nums.size(); i++){
            
            if(nums[i]==1) sum++;
            else sum--;
            
            if(sum==0){
                maxlen = i+1;
            }
            
            else{
                
                //Not Found
                if(mp.find(sum)==mp.end()){
                    mp[sum] = i+1;
                    maxlen = max(maxlen, 0);
                }
                
                //Found
                else{
                    maxlen = max(maxlen, (i+1) - mp[sum]);
                }
                
            }
        }
        
        return maxlen;
        
    }
};
