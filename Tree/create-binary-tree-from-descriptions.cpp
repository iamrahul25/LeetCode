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

    TreeNode* makeTree(unordered_map<int, pair<int,int>> &mp, int val){

        if(mp.find(val)==mp.end()) return new TreeNode(val);

        if(mp[val].first!=-1 and mp[val].second!=-1){
            return new TreeNode(val, makeTree(mp, mp[val].first), makeTree(mp, mp[val].second));
        }
        else if(mp[val].first==-1){
            return new TreeNode(val, NULL, makeTree(mp, mp[val].second));
        }
        else return new TreeNode(val, makeTree(mp, mp[val].first), NULL);
    }

    TreeNode* createBinaryTree(vector<vector<int>>&matrix){
        unordered_map<int, pair<int, int>> mp;
        unordered_set<int> st1;
        unordered_set<int> st2;
        int n = matrix.size();
        
        for(int i=0; i<n; i++){
            int p = matrix[i][0];
            int c = matrix[i][1];
            int l = matrix[i][2];

            st1.insert(p);
            st2.insert(c);

            if(l==1){
                if(mp.find(p)!=mp.end()) mp[p] = {c, mp[p].second};
                else mp[p] = {c, -1};
            }
            else{
                if(mp.find(p)!=mp.end()) mp[p] = {mp[p].first, c};
                else mp[p] = {-1, c};
            }
        }

        for(auto x: st2) st1.erase(x);
        int headval = *st1.begin();

        TreeNode* root = makeTree(mp, headval);
        return root;
    }
};
