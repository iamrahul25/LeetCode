class Solution {
public:
    
    //Recursive Solution + Memoization (DP)---------------------------
    bool reach(int start, vector<int>& arr, vector<int> &dp) {
        
        if(start>=arr.size()) return false;
        if(start<0) return false;

        if(arr[start]==0) return true;

        if(arr[start]<0) return false;
        
        //DP - Memoization Condition-------------
        if(dp[start]!=-1){
            return dp[start];
        }

        //Visited - To avoid Looping in Recursion
        arr[start] = -1 * arr[start];

        //This method is Slower: Because if Zero if found it still Find all Possible Paths.
        
        // bool forward = reach(start+arr[start],arr,dp);
        // bool backward = reach(start-arr[start],arr,dp);
        // return dp[start] = (forward or backward);
        
        //This method is Faster: Because if Zero if found it autmatically Stops and return true.
        return dp[start] = (reach(start+arr[start],arr,dp) or reach(start-arr[start],arr,dp));
    }
    
    bool canReach(vector<int>&arr, int start){
        vector<int> dp(arr.size(), -1);
        return reach(start,arr,dp);
    }
    
    
    
    //Recursive Solution---------------------------(Pass All Test Cases)
//     bool canReach(vector<int>& arr, int start) {
        
//         if(start>=arr.size()) return false;
//         if(start<0) return false;

//         if(arr[start]==0) return true;

//         if(arr[start]<0) return false;

//         //Visited - To avoid Looping in Recursion
//         arr[start] = -1 * arr[start];

//         bool forward = canReach(arr, start+arr[start]);
//         bool backward = canReach(arr, start-arr[start]);

//         return (forward or backward);
//     }
};
