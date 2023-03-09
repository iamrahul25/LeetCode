class Solution {
public:

    TreeNode* makeTree(vector<int>&nums, int i, int j){
        if(i>j) return NULL;
        int mid = (i+j)/2;
        return new TreeNode(nums[mid], makeTree(nums, i, mid-1), makeTree(nums, mid+1, j));
    }

    TreeNode* sortedArrayToBST(vector<int>&nums) {
        TreeNode* root = makeTree(nums, 0, nums.size()-1);
        return root;
    }
};
