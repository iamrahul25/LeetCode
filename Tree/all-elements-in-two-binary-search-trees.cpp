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
    
    //Approach 2: Optimise --> Binary Search Tree are sorted. 
    //Time: O(N)  Space: O(N)
    
    
    
    //Approach 1: Brute Force  Time: O(NlogN)  Space: O(N)
    void preorder(TreeNode* root, vector<int> &v){
        if(root==NULL) return;
        
        v.push_back(root->val);
        
        preorder(root->left, v);
        preorder(root->right, v);
    }
    
    
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector<int> v;
        preorder(root1, v);
        preorder(root2, v);
        
        sort(v.begin(), v.end());
        
        return v;
    }
};
