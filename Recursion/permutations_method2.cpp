class Solution {
public:
    
    void all_permutation(int index, vector<int> &arr, int length, vector<vector<int>> &all){
        //Base case: 
        if(index==length){
            all.push_back(arr);
        }

        //Main Loop
        for(int i=index; i<length; i++){
            swap(arr[i],arr[index]);
            all_permutation(index+1, arr, length, all);

            //Undo Changes.
            swap(arr[i],arr[index]);
        }
    }
    
    
    vector<vector<int>> permute(vector<int>& nums) {
        
        vector<vector<int>> solution;
        
        sort(nums.begin(), nums.end());
        
        all_permutation(0,nums,nums.size(),solution);
        
        return solution;
    }
};
