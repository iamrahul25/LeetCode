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
    
    void paths_recursive(TreeNode* root, string s, vector<string> &all){
        if(root==NULL){
            return;
        }
        
        if(root->left == NULL and root->right==NULL){
            s = s + to_string(root->val);
            all.push_back(s);
            return;
        }
        
        paths_recursive(root->left, s + to_string(root->val) + "->", all);
        paths_recursive(root->right, s + to_string(root->val) + "->", all);
    }
    
    
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> allpaths;
        
        paths_recursive(root, "", allpaths);
        
        return allpaths;
    }
};
