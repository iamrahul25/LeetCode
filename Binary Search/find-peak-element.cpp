class Solution {
public:
    //Approach 3: Binary Search: 
    int findPeakElement(vector<int>& nums) {
        
        int n = nums.size();
        if(n==1) return 0;
        
        int low = 0; 
        int high = n-1;
        int mid;
        
        while(low<high){
            mid = (low+high)/2;
            
            if(nums[mid]>nums[mid+1]){
                high = mid;
            }
            
            else{
                low = mid+1;
            }
        }
        
        return low;
    }
    
    
    //Approach 2: Short Code: Generalize
//     int findPeakElement(vector<int>& nums) {
        
//         int n = nums.size();
        
//         for (int i=0; i < n-1; i++) {
//             if (nums[i] > nums[i + 1])
//                 return i;
//         }
        
//         return n - 1;
        
//     }
    
    
    
    //Approach 1: Brute Force  Time: O(N)  Space: O(1)
//     int findPeakElement(vector<int>& nums) {
        
//         int n = nums.size();
        
//         if(n==1) return 0;
        
//         if(nums[0]>nums[1]) return 0;
        
//         if(nums[n-1]>nums[n-2]) return n-1;
        
//         for(int i=1; i<n-1; i++){
//             if(nums[i]>nums[i-1] and nums[i]>nums[i+1]){
//                 return i;
//             }
//         }
        
//         return -1;
        
//     }
    
};
