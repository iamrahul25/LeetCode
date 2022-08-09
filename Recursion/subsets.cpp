class Solution {
public:
    
    void all_subsets(int index, vector<int> arr, int length, vector<int> &container, vector<vector<int>> &allsubsets){
        
        //Base Case:
        if(index>=length){
            allsubsets.push_back(container);
            return;
        }


        //Take - Push 
        container.push_back(arr[index]);
        all_subsets(index+1, arr, length, container, allsubsets);

        //Not Take - Pop
        container.pop_back();
        all_subsets(index+1, arr, length, container, allsubsets);
    }
    
    
    vector<vector<int>> subsets(vector<int>& nums) {
        
        vector<vector<int>> allsubsets;
        vector<int> container;
        
        //Calling Recursive Function
        all_subsets(0,nums, nums.size(), container, allsubsets);
        
        return allsubsets;
    }
};
