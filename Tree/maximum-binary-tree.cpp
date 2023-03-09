class Solution {
public:

    TreeNode* makeTree(vector<int>&nums, int i, int j, int n){
        if(i>j) return NULL;
        int idx = max_element(nums.begin()+i, nums.begin()+j+1) - nums.begin();
        return new TreeNode(nums[idx], makeTree(nums, i, idx-1, n), makeTree(nums, idx+1, j, n));
    }

    TreeNode* constructMaximumBinaryTree(vector<int>& nums){
        int n = nums.size();
        TreeNode* root = makeTree(nums, 0, n-1, n);
        return root;
    }
};
