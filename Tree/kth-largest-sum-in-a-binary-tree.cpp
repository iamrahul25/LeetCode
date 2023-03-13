class Solution {
public:
    //Level Order Traversal + Sorting  Time: O(NlogN) Space: O(N)
    long long kthLargestLevelSum(TreeNode* root, int k) {
        queue<TreeNode*> q;
        q.push(root);
        vector<long long> v;

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
            v.push_back(sum);
        }

        if(k>v.size()) return -1;
        sort(v.begin(), v.end());
        return v[v.size()-k];
    }
};
