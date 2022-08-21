class Solution {
public:
    
// Recursion + Memoization (DP - Top Down)------------------------
    int minjump(int index, vector<int> &arr, vector<int> &dp){

        //Base Case
        if(index>=arr.size()-1){
            return 0;
        }

        //If element is zero. 
        if(arr[index]==0){
            return INT_MAX - index;
        }
        
        if(dp[index]!=-1){
            return dp[index];
        }

        int minn = INT_MAX;
        for(int i=1+index; i<=arr[index]+index; i++){
            minn = min(minn, 1 + minjump(i, arr, dp));
        }

        return dp[index] = minn;
    }

    int jump(vector<int>& nums) {
        
        int n = nums.size();
        vector<int> dp(n,-1);
        
        return minjump(0,nums,dp);
    }
    
//Recursive Solution------------------------------------
//     int minjump(int index, vector<int> &arr){

//         //Base Case
//         if(index>=arr.size()-1){
//             return 0;
//         }

//         //If element is zero. 
//         if(arr[index]==0){
//             return INT_MAX - index;
//         }

//         int minn = INT_MAX;
//         for(int i=1+index; i<=arr[index]+index; i++){
//             minn = min(minn, 1 + minjump(i, arr));
//         }

//         return minn;
//     }

//     int jump(vector<int>& nums) {
        
//         return minjump(0,nums);
//     }
    
};
