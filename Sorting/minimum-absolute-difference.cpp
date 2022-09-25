class Solution {
public:
    
    //Approach 1: Sorting  Time: O(NlogN) 
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        
        int n = arr.size();
        sort(arr.begin(), arr.end());
        
        int diff = INT_MAX;
        for(int i=0; i<n-1; i++){
            int d = arr[i+1]-arr[i];
            diff = min(diff, d);
        }
        
        vector<vector<int>> ans;
        
        for(int i=0; i<n-1; i++){
            if(arr[i+1]-arr[i]==diff){
                ans.push_back({arr[i], arr[i+1]});
            }
        }
        
        return ans;
    }
    
    
    //Approach 2: Brute Force: Time: O(N^2)
};
