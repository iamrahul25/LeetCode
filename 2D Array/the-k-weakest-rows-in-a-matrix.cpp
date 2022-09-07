class Solution {
public:
    
    //Time: O(M*N) + M(logM)   Space: O(M)
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        
        int m = mat.size();
        int n = mat[0].size();
        
        vector<pair<int,int>> vec(m);
        
        //Counting soldiers
        for(int i=0; i<m; i++){
            int c = 0;
            for(int j=0; j<n; j++){
                if(mat[i][j]==1) c++;
            }
            
            vec[i] = {c,i};
        }
        
        //Sorting
        sort(vec.begin(), vec.end());
        
        vector<int> ans(k);
        for(int i=0; i<k; i++){
            ans[i] = vec[i].second;
        }
        
        return ans;
    }
};
