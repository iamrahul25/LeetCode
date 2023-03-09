class Solution {
public:

    TreeNode* makeTree(vector<int>&nums, int i, int j){
        if(i>j) return NULL;
        int mid = (i+j)/2;
        return new TreeNode(nums[mid], makeTree(nums, i, mid-1), makeTree(nums, mid+1, j));
    }

    void traversal(TreeNode* root, vector<int>&arr){
        if(root==NULL) return;
        arr.push_back(root->val);
        traversal(root->left, arr);
        traversal(root->right, arr);
    }

    TreeNode* balanceBST(TreeNode* root) {
        vector<int> sortarr;
        traversal(root, sortarr);
        sort(sortarr.begin(), sortarr.end());
        return makeTree(sortarr, 0, sortarr.size()-1);
    }
};
