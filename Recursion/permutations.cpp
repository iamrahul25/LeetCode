class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        
        vector<vector<int>> solution;
        
        sort(nums.begin(), nums.end());
        
        do{
           solution.push_back(nums);
        }
        while(next_permutation(nums.begin(), nums.end()));
        
        return solution;
    }
};
