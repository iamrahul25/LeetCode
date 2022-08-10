class Solution {
public:
    
    
    void combination_sum_recursive(int i, vector<int>&arr, int len, vector<int> &ds, vector<vector<int>> &all ,int sum, int target){

        //Base Condition - To Stop Recursion.
        if(i>=len){
            return;
        }

        //Condition
        if(sum>target){
            return;
        }

        if(sum==target){
            all.push_back(ds);
            return;
        }


        //Take - Push.
        ds.push_back(arr[i]);
        combination_sum_recursive(i, arr, len, ds, all, sum+arr[i], target);

        //Not Take - Pop.
        ds.pop_back();
        combination_sum_recursive(i+1, arr, len, ds, all, sum, target);
    }
    
    
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> all;
        vector<int> ds;

        combination_sum_recursive(0,candidates, candidates.size(), ds, all, 0, target);

        for(auto a: all){
            for(auto x: a){
                cout<<x<<" ";
            }
            cout<<endl;
        }

        return all;
    }
};
