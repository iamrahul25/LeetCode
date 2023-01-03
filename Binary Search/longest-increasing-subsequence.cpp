class Solution {
public:

    //Longest Increasing subsequence can by done by two ways: 
    // 1. Using DP -> Time: O(N^2)  Space: O(N^2)  --> Gives TLE as N = 10^5
    // 2. Using Binary Search -> Time: O(NlogN) Space: O(N)

    //Method 1: Using DP

    //Method 2: LIS using Binary Search
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();

        vector<int> arr;
        arr.push_back(nums[0]);

        for(int i=1; i<n; i++){

            int index = lower_bound(arr.begin(), arr.end(), nums[i]) - arr.begin();

            if(arr.size()==index){
                arr.push_back(nums[i]);
            }
            else{
                arr[index] = nums[i];
            }
        }
    
        return arr.size();
    }
};
