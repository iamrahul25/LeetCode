class Solution {
public:
    
    //Furter More Optimise: Time: O(N), Space: O(1) --> Two pointer
    
    
    
    //Furter Optimise Space:  Time: O(NlogN), Space: O(1)
    int arithmeticTriplets(vector<int>& nums, int diff) {
        
        int n = nums.size();
        
        int count = 0;
        for(int i=0; i<n; i++){
            
            bool a = binary_search(nums.begin(), nums.end(), nums[i]-diff);
            bool b = binary_search(nums.begin(), nums.end(), nums[i]+diff);
            
            if(a and b){
                count++;
            }
        }
        
        return count;
        
    }
    
    
    
    //Optimise Approach: Time: O(N), Space: O(N)
//     int arithmeticTriplets(vector<int>& nums, int diff) {
    
//         unordered_set<int> st;
        
//         int n = nums.size();
        
//         for(auto x: nums){
//             st.insert(x);
//         }
        
//         int count = 0;
        
//         for(int i=0; i<n; i++){
//             if(st.find(nums[i]-diff)!=st.end() and st.find(nums[i]+diff)!=st.end()){
//                 count++;
//             }
//         }
        
//         return count;
//     }
    
    
    
    //Brute Force: Time: O(N^3)  Space: O(1)
//     int arithmeticTriplets(vector<int>& nums, int diff) {
        
//         int n = nums.size();
        
//         int count = 0;
        
//         for(int i=0; i<n; i++){
//             for(int j=i+1; j<n; j++){
//                 for(int k = j+1; k<n; k++){
//                     if(abs(nums[i]-nums[j])==abs(nums[j]-nums[k]) and abs(nums[j]-nums[k])==diff){
//                         count++;
//                     }
//                 }
//             }
//         }
        
//         return count;
//     }
    
};
