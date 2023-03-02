class Solution {
public:
    int maximumXOR(vector<int>& nums) {

        vector<int> arr(32, 0);

        for(int i=0; i<nums.size(); i++){
            for(int j=0; j<32; j++){
                arr[j] = arr[j] + ((nums[i]>>j)&1);
            }
        }

        int ans = 0;
        for(int i=0; i<32; i++){
            if(arr[i]!=0){
                ans = ans + pow(2, i);
            }
        }

        return ans;
    }
};
