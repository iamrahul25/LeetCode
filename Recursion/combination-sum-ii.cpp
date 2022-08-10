class Solution {
public:
    
    void combination_recursive(int index, vector<int>&arr, int length, vector<int> &ds, vector<vector<int>> &all, int sum, int target){
        
        //Base Case:
        if((index>length) or (sum>target)){
            return;
        }

        if(sum==target){
            all.push_back(ds);
            return;
        }

        for(int i=index; i<length; i++){

            //Check - Duplicate element
            if(i>index and arr[i]==arr[i-1]){
                continue;
            }

            //Pick 
            ds.push_back(arr[i]);
            combination_recursive(i+1, arr, length, ds, all, sum + arr[i], target);

            ds.pop_back();
        }
    }
    
    
    
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> all;
        vector<int> ds;

        //Sorting Imp
        sort(candidates.begin(), candidates.end());

        combination_recursive(0,candidates,candidates.size(), ds, all, 0, target);
        
        return all;
    }
};
