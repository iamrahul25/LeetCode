class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        int p1 = 0; 
        int p2 = 1;
        int count = 1;
        
        while(p2<nums.size()){
            if(nums[p1]==nums[p2]){
                p2++;
            }
            else{
                p1++;
                nums[p1] = nums[p2];
                count++;
            }
        }
        
        return count;
        
    }
};
