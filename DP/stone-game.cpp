class Solution {
public:

    //Approach 1: Time: O(2^N) Space: O(1) Approach: Recursion  -> TLE Error!

    //Approach 2: Time: O(N^2) Space: O(N^2) Approach: DP -> Memoization
    // bool recursion(int turn, int i, int j, int sum1, int sum2, vector<int>&piles, vector<vector<int>>&dp){
    //     //Base Case: 
    //     if(i>j){
    //         if(sum1>sum2) return true;
    //         else return false;
    //     }

    //     if(dp[i][j]!=-1) return dp[i][j];

    //     if(turn==0){
    //         bool a = recursion(1, i+1, j, sum1 + piles[i], sum2, piles, dp);
    //         bool b = recursion(1, i, j-1, sum1 + piles[j], sum2, piles, dp);

    //         if(a||b) return dp[i][j] = 1;
    //         else return dp[i][j] = 0;
    //     }
    //     else{
    //         int a = recursion(0, i+1, j, sum1, sum2 + piles[i], piles, dp);
    //         int b = recursion(0, i, j-1, sum1, sum2 + piles[j], piles, dp);
    //         if(a||b) return dp[i][j] = 1;
    //         else return dp[i][j] = 0;
    //     }
    // }


    // bool stoneGame(vector<int>& piles) {
    //     int n = piles.size();
    //     vector<vector<int>> dp(n+1, vector<int>(n+1, -1));
    //     return recursion(0, 0, n-1, 0, 0, piles, dp);
    // }

    //Approach 3: Just Return True because Alice always wins.  As piles are even and sum is Odd and Alice turn is first.
    //Time: O(1) Space: O(1)
    bool stoneGame(vector<int>& piles) {
        return true;
    }
};
