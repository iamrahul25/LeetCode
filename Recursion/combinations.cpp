class Solution {
public:

    //Time: O(nCk) and Space: (nCk) -> Combination Problem
    vector<vector<int>> ans;
    void recursion(int i, int k, int n, vector<int>&arr){
        //Base Case: 
        if(i==n+1){
            if(arr.size()==k) ans.push_back(arr);
            return;
        }
        arr.push_back(i);
        recursion(i+1,k,n,arr);

        arr.pop_back();
        recursion(i+1,k,n,arr);
    }

    vector<vector<int>> combine(int n, int k){
        vector<int> arr;
        recursion(1,k,n,arr);
        return ans;
    }
};
