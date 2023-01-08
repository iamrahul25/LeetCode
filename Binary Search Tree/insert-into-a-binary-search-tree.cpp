/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:

    void insert(TreeNode* root, int val){
        
        if((root->left == NULL) and (val < root->val)){
            root->left = new TreeNode(val);
            return;
        }
        else if((root->right == NULL) and (val > root->val)){
            root->right = new TreeNode(val);
            return;
        }

        else if(val < root->val) insert(root->left, val);

        else insert(root->right, val);
    }


    TreeNode* insertIntoBST(TreeNode* root, int val) {
        //If Tree is Empty
        if(root==NULL) return new TreeNode(val);

        insert(root, val);
        return root;
    }
};
