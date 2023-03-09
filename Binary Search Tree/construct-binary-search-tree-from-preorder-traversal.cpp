class Solution {
public:
    TreeNode* insertBST(TreeNode* root, int value){
        if(root==NULL){
            return new TreeNode(value);
        }

        if(value<root->val) root->left = insertBST(root->left, value);
        else root->right = insertBST(root->right, value);

        return root;
    }

    TreeNode* bstFromPreorder(vector<int>& preorder) {
        TreeNode* root = NULL;
        for(auto x: preorder){
            root = insertBST(root, x);
        }

        return root;
    }
};
