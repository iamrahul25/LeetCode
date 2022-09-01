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
    void helper(TreeNode* root, int maxx, int &count){
        
        if(root==NULL) return;
        
        if(root->val >= maxx){
            maxx = root->val;
            count++;
        }
        
        //Left Side
        helper(root->left, maxx, count);
        
        //Right Side
        helper(root->right, maxx, count);

    }
    
    
    int goodNodes(TreeNode* root) {
        int maxx = INT_MIN;
        int count = 0;
        helper(root, maxx, count);
        
        return count;
    }
};
