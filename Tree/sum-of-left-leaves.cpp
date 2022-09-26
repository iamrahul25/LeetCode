class Solution {
public:
    void dfs(TreeNode* root, int &sum, bool isleft){
        if(root==NULL) return;
        
        if(root->left==NULL and root->right==NULL and isleft){
            sum = sum + root->val;
        }
        
        dfs(root->left, sum, true);
        dfs(root->right,sum, false);
    }
    
    int sumOfLeftLeaves(TreeNode* root) {
        int sum = 0;
        dfs(root,sum,false);
        
        return sum;
    }
};
