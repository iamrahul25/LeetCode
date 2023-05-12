class Solution {
public:

    //Problem is Similar to Frog Jump: DP Problem: Time: O(N) Space: O(N)
    //Recursive Code: 
    long long findMax(int i, vector<vector<int>>& arr, vector<long long> &dp){
        //Base Case: 
        if(i>=arr.size()) return 0;

        // //Checking in DP Table: 
        if(dp[i]!=-1) return dp[i];

        //Solve Question
        long long solve = arr[i][0] + findMax(i+1+arr[i][1], arr, dp);

        //Skip Question
        long long skip = findMax(i+1, arr, dp);

        return dp[i] = max(solve, skip);
    }

    long long mostPoints(vector<vector<int>>& arr) {
        //DP 
        int n = arr.size();
        vector<long long> dp(n, -1);
        return findMax(0, arr, dp);
    }
};

//Link: https://leetcode.com/problems/solving-questions-with-brainpower/
