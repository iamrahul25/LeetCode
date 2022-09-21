class Solution {
public:

    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries){
        
        int n = nums.size();
        int q = queries.size();
        
        int sum = 0;
        
        for(int i=0; i<n; i++){
            if(nums[i]%2==0){
                sum = sum + nums[i];
            }
        }
        
        vector<int> ans(q);
        
        //For Queries
        for(int i=0; i<q; i++){
            
            int num = queries[i][0];
            int index = queries[i][1];
            
            if(nums[index]%2==0){
                sum = sum - nums[index];
            }
            
            if((nums[index]+num)%2==0){
                sum = sum + nums[index] + num;
            }
            
            nums[index] = nums[index] + num;
            ans[i] = sum;
            
        }
        
        return ans;
    }
};
