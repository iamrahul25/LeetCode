class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        
        
        
        //Method I --------------------- O(N^2)
        // int n = nums.size();
        // int count = 0;
        // for(int i=0; i<n; i++){
        //     for(int j=i+1; j<n; j++){
        //         if(nums[i]==nums[j]){
        //             count++;
        //         }
        //     }
        // }
        // return count;
        
        
        //Method 2---------------------
        map<int,int> mpp;
        
        for(int i=0; i<nums.size(); i++){
            mpp[nums[i]]++;
        }
        
        int sum = 0;
        
        for(auto ele: mpp){
            int no = ele.second;
            sum = sum + (no*(no-1)/2);
        }
        
        return sum;
    }
};
