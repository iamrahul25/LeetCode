class Solution {
public:
    
    
    //Approach 2: Time: O(N)  Space: O(N) -----> About advance()
    int thirdMax(vector<int>& nums) {
        set<int> st;
        
        for(int i=0; i<nums.size(); i++){
            st.insert(nums[i]);
        }
        
        auto it = st.end();
        
        if(st.size() < 3){
            advance(it, -1);
            return *it;
        }
        
        else{
            advance(it, -3);
            return *it;
        }
    
    }
    
    
    
    
    //Appoach 1: Time: O(N)   Space: O(N + N)
//     int thirdMax(vector<int>& nums) {
        
//         int n = nums.size();
        
//         set<int> s;
        
//         for(int i=0; i<n; i++){
//             s.insert(nums[i]);
//         }
        
//         int l = s.size();
//         vector<int> vec(l);
        
//         int i = 0;
//         for(auto x: s){
//             vec[i] = x;
//             i++;
//         }
        
        
//         if(l<3){
//             return vec[l-1];
//         }
        
//         return vec[l-3];
//     }
};
