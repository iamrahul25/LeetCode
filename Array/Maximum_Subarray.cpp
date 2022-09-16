class Solution {
public:
    int maxSubArray(vector<int>& nums) {

        int cursum = 0;
        int maxsum = nums[0];


        //Edge Case: When all the elements are negative. 
        int count = 0;
        int maxm = nums[0];
        for(int i=0; i<nums.size(); i++){
            if(nums[i]<0){
                count++;
                maxm = max(nums[i], maxm);
            }
            else{
                break;
            }
        }
        if(count==nums.size()){
            return maxm;
        }


        //When any one element is positive.
        else{

            for(int i=0; i<nums.size(); i++){

                cursum = cursum + nums[i];
                if(cursum < 0){
                    cursum = 0;
                }

                maxsum = max(cursum, maxsum);
            }

            return maxsum;

        }
    }
};
