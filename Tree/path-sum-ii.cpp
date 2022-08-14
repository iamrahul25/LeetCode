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
    void recursive(TreeNode* root, int sum, int target, vector<int> v, vector<vector<int>> &all){
        if(root==NULL){
            return;
        }
        
        if(root->left==NULL and root->right==NULL){
            sum = sum + root->val;
            v.push_back(root->val);
            
            if(sum==target){
                all.push_back(v);
                return;
            }
            
            return;
        }
        
        v.push_back(root->val);
        sum = sum + root->val;
        
        //Left Subtree:
        recursive(root->left, sum, target, v, all);
        
        //Right Subtree:
        recursive(root->right, sum, target, v, all);
        
    }
    
    
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> all;
        vector<int> v;
        
        recursive(root, 0, targetSum, v, all);
        
        return all;
    }
};
