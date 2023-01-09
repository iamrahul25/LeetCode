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

    bool traversal(TreeNode* root, int k, unordered_set<int> &st){
        if(root==NULL){
            return false;
        }
        int num = root->val;
        if(st.find(k-num)!=st.end()) return true;
        st.insert(num);

        return traversal(root->left, k, st) || traversal(root->right, k, st); 
    }

    bool findTarget(TreeNode* root, int k) {
        unordered_set<int> st;
        return traversal(root, k, st);
    }
};
