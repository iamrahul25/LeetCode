class Solution {
public:
    
    int rob_recursion(int i, vector<int> &arr, vector<int> &dp, int start_index){
                
        if(i>=arr.size()-1 and start_index==0){
            return 0;
        }
        
        else if(i>=arr.size()){
            return 0;
        }

        if(dp[i]!=-1){
            return dp[i];
        }

        //Can take 2 Step 
        int two = arr[i] + rob_recursion(i+2, arr, dp, start_index);

        //Can take 3 Step
        int three = arr[i] + rob_recursion(i+3,arr, dp, start_index);

        return dp[i] = max(two, three);
    }
    
    
    int rob(vector<int>& nums) {
        int n = nums.size();
        
        //Edge Case
        if(n==1){
            return nums[0];
        }
        
        vector<int> dp1(n, -1);
        vector<int> dp2(n, -1);
        vector<int> dp3(n, -1);

        int index0 = rob_recursion(0, nums, dp1, 0);
        int index1 = rob_recursion(1, nums, dp2, 1);
        int index2 = rob_recursion(2, nums, dp3, 2);

        int ans = max(max(index0,index1), index2) ;

        cout<<ans<<endl;

        return ans;
    }
};
