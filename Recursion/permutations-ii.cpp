class Solution {
public:
    
    void all_permutation(int index, vector<int> num, int length, vector<vector<int>> &solution) {
        if (index == length-1) {
            solution.push_back(num);
            return;
        }
        for (int i = index; i < length; i++) {
            if ((index != i) && num[index] == num[i]) continue;
            
            swap(num[index], num[i]);
            all_permutation(index+1, num, length, solution);
        }
    }
    
    
    vector<vector<int>> permuteUnique(vector<int>& nums){
        
        vector<vector<int>> solution;
        
        sort(nums.begin(), nums.end());
        
        all_permutation(0,nums,nums.size(), solution);
        
        return solution;
    }
};
