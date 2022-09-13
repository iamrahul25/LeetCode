class Solution {
public:
    
    int findLHS(vector<int>& nums) {
        
        unordered_map<int,int> mp;
        
        //Frequency Map
        for(auto x: nums){
            mp[x]++;
        }
        
        int maxlen = 0;
        
        for(auto x: mp){
            
            int n = x.first;
            
            if(mp.find(n+1)!=mp.end()){
                maxlen = max(maxlen, mp[n]+mp[n+1]);
            }
            
            if(mp.find(n-1)!=mp.end()){
                maxlen = max(maxlen, mp[n]+mp[n-1]);
            }
        }
        
        return maxlen;
    }
    
    //Brute Force: Time: O(N^2)  Space: O(1) --> TLE (167/206) Test Case Passed. 
//     int findLHS(vector<int>& nums) {
        
//         int n = nums.size();
        
        
//         int max1 = 0;
//         int max2 = 0;
        
//         int c1, c2, len;
        
//         //+1 Loop
//         for(int i=0; i<n; i++){
//             c1 = 0, c2 = 0;
//             for(int j=i; j<n; j++){
//                 if(nums[i]==nums[j]){
//                     c1++;
//                 }
//                 else if(nums[i]==nums[j]+1){
//                     c2++;
//                 }
//             }
            
//             if(c2==0) len = 0;
//             else len = c1+c2;
            
//             max1 = max(max1, len);
//         }
        
//         //-1 Loop
//         for(int i=0; i<n; i++){
//             c1 = 0, c2 = 0;
//             for(int j=i; j<n; j++){
//                 if(nums[i]==nums[j]){
//                     c1++;
//                 }
//                 else if(nums[i]==nums[j]-1){
//                     c2++;
//                 }
//             }
            
//             if(c2==0) len = 0;
//             else len = c1+c2;
            
//             max1 = max(max1, len);
//         }
        
//         return max(max1, max2);
//     }
    
};
