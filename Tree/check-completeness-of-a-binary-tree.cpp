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

    int countNodes(TreeNode* root){
        if(root==NULL) return 0;
        return 1 + countNodes(root->left) + countNodes(root->right);
    }
    
    //Time: O(N) Space: O(N)  -> BFS + DFS
    bool isCompleteTree(TreeNode* root) {
        if(root==NULL) return true;
        queue<TreeNode*> q;
        q.push(root);
        
        int total = 1;
        bool flag = 1;
        while(!q.empty() and flag){
            int n = q.size();
            for(int i=0; i<n; i++){
                TreeNode* front = q.front();
                if(front->left and front->right){
                    q.push(front->left);
                    q.push(front->right);
                    total = total + 2;
                }
                else{
                    if(front->left) total++;
                    flag = 0;
                    break;
                }
                q.pop();
            }
        }

        int nodes = countNodes(root);

        if(total==nodes) return true;
        return false;
    }
};
