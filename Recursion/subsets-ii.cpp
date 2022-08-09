class Solution {
public:
    
    
    void all_subsets(int index, vector<int> arr, int length, vector<int> &container, set<vector<int>> &allsubsets){
        
        //Base Case:
        if(index>=length){
            allsubsets.insert(container);
            return;
        }


        //Take - Push 
        container.push_back(arr[index]);
        all_subsets(index+1, arr, length, container, allsubsets);

        //Not Take - Pop
        container.pop_back();
        all_subsets(index+1, arr, length, container, allsubsets);
    }
    
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        
        //Important...Sorting.
        sort(nums.begin(), nums.end());
        
        set<vector<int>> allsubsets;
        vector<int> container;

        //Calling Recursive Function
        all_subsets(0,nums, nums.size(), container, allsubsets);

        vector<vector<int>> solution;

        for(auto v: allsubsets){
            solution.push_back(v);
        }

        return solution;
    }
};
