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
    
    void preorder(TreeNode* node, vector<int> &arr){
        if(node==NULL){
            return;
        }
            
        if(node->left == NULL and node->right==NULL){
            arr.push_back(node->val);
            return;
        }
        
        arr.push_back(node->val);
        preorder(node->left, arr);
        preorder(node->right, arr);
    }
    
    
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> arr;
        
        preorder(root, arr);
        
        return arr;
    }
};
