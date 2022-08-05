class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans = {-1,-1};

        int n = nums.size();
        
        //For Lower Bound----------
        int low = 0;
        int high = n-1;
        int mid; 

        while(low<=high){
            mid = (low + high)/2;

            if(nums[mid]==target){
                ans[0] = mid;
                high = mid-1;
            }

            else if(nums[mid]>target){
                high = mid-1;
            }

            else if(nums[mid]<target){
                low = mid+1;
            }
        }


        //For Upper Bound------------
        low = 0;
        high = n-1;
        mid; 

        while(low<=high){
            mid = (low + high)/2;

            if(nums[mid]==target){
                ans[1] = mid;
                low = mid+1;
            }

            else if(nums[mid]>target){
                high = mid-1;
            }

            else if(nums[mid]<target){
                low = mid+1;
            }
        }

        // cout<<ans[0]<<" : "<<ans[1]<<endl;

        return ans;
    }
};
