class Solution {
public:

    //Approach 2: BFS -> Level Order Travesal 

    //Approach 1: DFS -> Finding Maximum Depth then Calculating Sum
    int height(TreeNode* root){
        if(root==NULL) return 0;
        return 1 + max(height(root->left), height(root->right));
    }

    void findsum(TreeNode* root, int x, int h, int &sum){
        if(root==NULL) return;
        if(x==h) sum = sum + root->val;
        findsum(root->left, x+1, h, sum);
        findsum(root->right, x+1, h, sum);
    }

    int deepestLeavesSum(TreeNode* root) {
        int h = height(root);
        int sum = 0;
        findsum(root,1,h,sum);
        return sum;

    }
};
