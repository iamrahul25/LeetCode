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
    
    void inorder(TreeNode* node, vector<int> &arr){
        if(node==NULL){
            return;
        }
            
        if(node->left == NULL and node->right==NULL){
            arr.push_back(node->val);
            return;
        }
        
        inorder(node->left, arr);
        arr.push_back(node->val);
        inorder(node->right, arr);
    }
    
    
    vector<int> inorderTraversal(TreeNode* root) {
        
        vector<int> arr;
        inorder(root, arr);
        return arr;
    }
};
