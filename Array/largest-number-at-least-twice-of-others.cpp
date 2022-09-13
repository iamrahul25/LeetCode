class Solution {
public:
    
    //Approach 3: (Straight Forward)
    //Find Maximum element and check all the element*2 <= max element. 
    
    
    //Approach 2: ---> Using Single Loop.
    int dominantIndex(vector<int>& nums) {
        int max1 = INT_MIN;
        int max2 = INT_MIN;
        
        int index = -1;
        
        for(int i=0; i<nums.size(); i++){
            if(max1<nums[i]){
                max2 = max1;
                max1 = nums[i];
                index = i;
            }
            
            else if(max2<nums[i]){
                max2 = nums[i];
            }
        }
        
        if(max1>=max2*2){
            return index;
        }
        
        else{
            return -1;
        }
        
        
    }
    
    
    //Approach 1: --> Using Two Loops
//     int dominantIndex(vector<int>& nums) {
        
//         int max1 = INT_MIN;
//         int max2 = INT_MIN;
        
//         int index = -1;
        
//         //Maximum
//         for(int i=0; i<nums.size(); i++){
//             if(max1<nums[i]){
//                 max1 = nums[i];
//                 index = i;
//             }
//         }
        
//         //Second Maximum
//         for(int i=0; i<nums.size(); i++){
//             if(nums[i]!=max1 and max2<nums[i]){
//                 max2 = nums[i];
//             }
//         }
        
//         if(max1>=max2*2){
//             return index;
//         }
        
//         else{
//             return -1;
//         }
//     }
    
};
