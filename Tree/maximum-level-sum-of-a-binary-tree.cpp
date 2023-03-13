class Solution {
public:
    int maxLevelSum(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);

        int maxsum = INT_MIN;
        int level = -1;
        int l = 0;
        while(!q.empty()){
            int n = q.size();
            long long sum = 0;
            for(int i=0; i<n; i++){
                TreeNode* front = q.front();
                if(front->left) q.push(front->left);
                if(front->right) q.push(front->right);
                sum = sum + front->val;
                q.pop();
            }
            l++;
            if(sum > maxsum){
                maxsum = sum;
                level = l;
            }
            
        }

        return level;
    }
};
