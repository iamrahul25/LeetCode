class Solution {
public:

    //Sliding Window Problem: With Circular Array: Time: O(N) Space: O(1)
    int minSwaps(vector<int>&nums) {
        
        int c = 0;
        for(auto x: nums) if(x==1) c++;
        

        int s = 0;
        int n = nums.size();
        for(int i=0; i<c; i++){
            if(nums[i]==0) s++;
        }

        int ans = s;
        for(int i=0; i<n; i++){
            if(nums[i%n]==0) s--;
            if(nums[(i+c)%n]==0) s++;

            ans = min(ans, s);
        }

        return ans;
    }
};
