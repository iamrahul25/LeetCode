/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:

    //Time: O(N)  Space: O(1)
    TreeNode* helper(TreeNode* root, int p, int q){
        if(root==NULL){
            return NULL;
        }   

        int rt = root->val;

        if((p<rt and q>rt) || (p==rt) || (q==rt)){
            return root;
        }
        else if(p<rt and q<rt){
            return helper(root->left,p,q);
        }
        else if(p>rt and q>rt){
            return helper(root->right,p,q);
        }

        return NULL;
    }

    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        int a = min(p->val, q->val);
        int b = max(p->val, q->val);

        return helper(root,a,b);
    }
};
