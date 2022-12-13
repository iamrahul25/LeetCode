class Solution {
public:

    //Approach 1: Greedy --- Time: O(N)
    int lws(vector<int>&nums){
        int n = nums.size();
        if(n==0 || n==1) return n;

        int prev = nums[1]-nums[0];
        int length = 2;
        if(nums[0]==nums[1]) length = 1;

        for(int i=2; i<n; i++){

            int diff = nums[i] - nums[i-1];

            if(((diff>0) and (prev<=0)) || ((diff<0) and (prev>=0))){
                length++;
                prev = diff;
            }
        }
        return length;
    }

    //Approach 2: DP  
    //Recursive Approach --- Submitted
    int lws2(vector<int>&arr, int n, int prev){
        if(n==arr.size()) return 0;

        int diff = arr[n] - arr[n-1];
        if((diff>0 and prev<=0) || (diff<0 and prev>=0)){
            return 1 + lws2(arr, n+1, diff);
        }
        else{
            return lws2(arr, n+1, prev);
        }
    }


    int wiggleMaxLength(vector<int>& nums) {
        return lws(nums);

        // int n = nums.size();
        // // Edge Cases: 
        // if(n==0 || n==1) return n;

        // int prev = nums[1]-nums[0];
        // int count = (nums[0]==nums[1]? 1 : 2);

        // return count + lws2(nums, 2, prev);
    }

};
