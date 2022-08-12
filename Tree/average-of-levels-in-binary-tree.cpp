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
    
    double find_sum(vector<double> v){
        double sum = 0;
        for(auto x: v){
            sum = sum + x;
        }
        return sum;
    }
    
    
    vector<double> averageOfLevels(TreeNode* root) {
        
        vector<double> ans;
        
        if(root==NULL){
            return ans;
        }
        
        queue<TreeNode*> que;
        que.push(root);
        
        while(!que.empty()){
            
            vector<double> vec;
            int n = que.size();
            
            for(int i=0; i<n; i++){
                
                TreeNode* front = que.front();
                
                vec.push_back(front->val);
                
                if(front->left!=NULL){
                    que.push(front->left);
                }

                if(front->right!=NULL){
                    que.push(front->right);
                }
                
                que.pop();
            }
            
            double sum = find_sum(vec);
            ans.push_back(sum/vec.size());
        }
        
        
        return ans;
        
    }
};
