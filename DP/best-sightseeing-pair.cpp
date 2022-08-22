class Solution {
public:
    //Approach 3: Recursion + DP
    
    
    //Approach 2: Prefix Sum/ Cumulative Sum
    int maxScoreSightseeingPair(vector<int>& values) {
        
        int n = values.size();
        vector<int> v(n,0);
        
        int maxx = INT_MIN;
        for(int i=n-1; i>=0; i--){
            int sum = values[i] - i;
            maxx = max(maxx, sum);
            v[i] = maxx;
        }
        
        int ans = INT_MIN;
        for(int i=0; i<n-1; i++){
            ans = max(ans, values[i]+i+v[i+1]);
        }
        
        return ans;
    }
    
    
    
    //Approach 1: Brute Force-------(TLE ERROR => 47/57 Test case passed!)
//     int maxScoreSightseeingPair(vector<int>& values) {
        
//         int n = values.size();
        
//         int maxx = INT_MIN;
//         for(int i=0; i<n; i++){
//             for(int j=i+1; j<n; j++){
//                 int sum = values[i] + values[j] + i-j;
//                 maxx = max(maxx,sum);
//             }
//         }
        
//         return maxx;
//     }
};
