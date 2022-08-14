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
    void sum_recursive(TreeNode* root, string s, vector<string> &all){
        if(root==NULL){
            return;
        }
        
        //Left Node
        if(root->left==NULL and root->right==NULL){
            s = s + to_string(root->val);
            all.push_back(s);
            return;
        }
        
        //Left Subtree
        sum_recursive(root->left, s + to_string(root->val), all);
        //Right Subtree
        sum_recursive(root->right, s + to_string(root->val), all);
    }
    
    int sumNumbers(TreeNode* root) {
        vector<string> all;
        sum_recursive(root,"",all);
        
        int sum = 0;
        for(auto x: all){
            sum = sum + stoi(x);
        }
        
        return sum;
    }
};
