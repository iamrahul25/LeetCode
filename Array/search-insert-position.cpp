class Solution {
public:
    int searchInsert(vector<int> &nums, int target) {

        int n = nums.size();

        if(target > nums[n - 1]){
            return n;
        }

        else{

            int low = 0;
            int high = n-1;
            int mid = (low + high) / 2 ;
            
            while(nums[low] < nums[high]){
                if(target == nums[mid]){
                    return mid;
                }
                
                else if(target < nums[mid]){
                    high = mid;
                    mid = (low + high)/2;
                }
                
                else{
                    low = mid+1;
                    mid = (low + high)/2;
                }
            }

            return mid; 

        }       
        
    }
};
