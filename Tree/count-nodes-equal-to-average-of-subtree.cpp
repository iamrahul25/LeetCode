class Solution {
public:

    //Time: O(N^2) Space: O(1) + StackSpace
    int count = 0;
    void findsum(TreeNode* root, int &c, int &sum){
        if(root==NULL) return;
        sum = sum + root->val;
        c++;
        findsum(root->left, c, sum);
        findsum(root->right, c, sum);
    }

    void traversal(TreeNode* root){
        if(root==NULL) return;
        int c = 0, sum = 0;
        findsum(root,c,sum);
        if(root->val == (sum/c)) count++;
        traversal(root->left);
        traversal(root->right);
    }

    int averageOfSubtree(TreeNode* root) {
        traversal(root);
        return count;
    }
};
