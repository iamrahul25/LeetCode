class Solution {
public:
    
    //Approach 2: Optimise Approach.
    int findSpecialInteger(vector<int>&arr){
        int n = arr.size();
        int x = n/4;
        
        for(int i=0; i<n-x; i++){
            if(arr[i]==arr[i+x]) return arr[i];
        }
        
        return -1;
    }
    
    //Approach 1: Using Map Time: O(N) Space: O(N)
    //Return most frequent element. 
    
//     int findSpecialInteger(vector<int>& arr) {
        
//         unordered_map<int,int>mp;
//         int maxe = 0;
        
//         for(auto x: arr){
//             mp[x]++;
//             maxe = max(maxe, mp[x]);
//         }
        
//         for(auto x: mp){
//             if(maxe==x.second){
//                 return x.first;
//             }
//         }
        
//         return -1;
//     }
    
};
