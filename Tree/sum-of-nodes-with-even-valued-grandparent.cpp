class Solution {
public:

    int sum = 0;
    void helper(TreeNode* root){
        if(root==NULL) return;
        
        if((root->val%2)==0){
            if(root->left!=NULL){
                if(root->left->left!=NULL) sum = sum + root->left->left->val;
                if(root->left->right!=NULL) sum = sum + root->left->right->val;
            }
            if(root->right!=NULL){
                if(root->right->right!=NULL) sum = sum + root->right->right->val;
                if(root->right->left!=NULL) sum = sum + root->right->left->val;
            }
        }

        helper(root->left);
        helper(root->right);
    }

    int sumEvenGrandparent(TreeNode* root) {
        helper(root);
        return sum;
    }
};
