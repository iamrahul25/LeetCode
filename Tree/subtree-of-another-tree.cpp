class Solution {
public:

    bool checkEqual(TreeNode* root1, TreeNode* root2){
        if(root1==NULL and root2==NULL) return true;
        if(root1==NULL or root2==NULL) return false;
        
        return (root1->val==root2->val) and (checkEqual(root1->left, root2->left)) and (checkEqual(root1->right, root2->right));
    }

    bool isSubtree(TreeNode* root, TreeNode* subRoot){
        if(root==NULL) return false;
        
        return (checkEqual(root, subRoot)) || isSubtree(root->left, subRoot) || isSubtree(root->right, subRoot);
    }
};
