class Solution {
public:
    
    //Approach 1: BFS Traversal  Time: O(N^2)  Space: O(N^2)
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();
        
        vector<vector<bool>> visited(m, vector<bool>(n,0));
        vector<vector<int>> result(m, vector<int>(n,0));
        
        queue<pair<pair<int,int>, int>> q;
        
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(mat[i][j]==0){
                    q.push({{i,j},0});
                    visited[i][j] = 1;
                }
            }
        }
        
        while(!q.empty()){
            int a = q.front().first.first;
            int b = q.front().first.second;
            int d = q.front().second;
            
            q.pop();
            
            if(a-1>=0 and mat[a-1][b]==1 and visited[a-1][b]==0){
                result[a-1][b] = d+1;
                visited[a-1][b] = 1;
                q.push({{a-1,b},d+1});
            }
            
            if(a+1<m and mat[a+1][b]==1 and visited[a+1][b]==0){
                result[a+1][b] = d+1;
                visited[a+1][b] = 1;
                q.push({{a+1,b},d+1});
            }
            
            if(b-1>=0 and mat[a][b-1]==1 and visited[a][b-1]==0){
                result[a][b-1] = d+1;
                visited[a][b-1] = 1;
                q.push({{a,b-1},d+1});
            }
            
            if(b+1<n and mat[a][b+1]==1 and visited[a][b+1]==0){
                result[a][b+1] = d+1;
                visited[a][b+1] = 1;
                q.push({{a,b+1},d+1});
            }
            
        }
        
        return result;
    }
};
