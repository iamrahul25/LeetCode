class Solution {
public:

    int reverse(int n){
        int sum = 0;
        while(n!=0){
            sum = (sum*10) + (n%10);
            n = n/10;
        }
        return sum;
    }

    int countDistinctIntegers(vector<int>& nums) {
        unordered_set<int> st;
        int n = nums.size();

        for(int i=0; i<n; i++){
            st.insert(nums[i]);
            st.insert(reverse(nums[i]));
        }

        return st.size();
    }
};
