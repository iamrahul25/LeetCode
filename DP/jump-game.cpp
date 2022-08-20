class Solution {
public:
    
//Recursion + Memoization (DP)---------------------------
    bool jump(int index, vector<int> &arr, vector<int> &dp){

        //Reached End
        if(index>=arr.size()-1){
            return true;
        }

        //Can't Reach End
        if(arr[index]==0){
            return dp[index] = 0;
        }

        if(dp[index]!=-1){
            return dp[index];
        }

        //All Jumps possible from 1 - Max Jump (arr[i]):
        for(int i=1; i<=arr[index]; i++){
            if(jump(index+i, arr, dp)){
                return dp[index+i] = 1;
            }
            else{
                dp[index+1] = 0;
            }
        }

        return false;

    }
    
    bool canJump(vector<int> &nums) {
        int n = nums.size();

        vector<int> dp(n+1, -1);
        
        return jump(0,nums,dp);
    }
    
    
// Using Recursion---------------------------------------
//     bool jump(int index, vector<int> &arr){

//         //Reached End
//         if(index>=arr.size()-1){
//             return true;
//         }

//         //Can't Reach End
//         else if(arr[index]==0){
//             return false;
//         }

//         //All Jumps possible from 1 - Max Jump (arr[i]):
//         for(int i=1; i<=arr[index]; i++){
//             if(jump(index+i, arr)){
//                 return true;
//             }
//         }

//         return false;
//     }
    
    
//     bool canJump(vector<int>& nums){
//         //Edge Case
//         if(nums.size()==1) return true;
        
//         return jump(0,nums);
//     }
};
