class Solution {
public:
    //***In this Problem we have to find number of disconnected graph. ***//
    //Approach 2: Directly apply BFS or DFS Traversal to Adjacency Matrix.
    void bfs(int n, vector<vector<int>>&adjMatrix, vector<int>&visited){
        queue<int> q;
        q.push(n);
        visited[n] = 1;
        
        int len = adjMatrix.size();
        
        while(!q.empty()){
            int front = q.front();
            q.pop();
            
            for(int i=0; i<len; i++){
                if((visited[i]==0) and (adjMatrix[front][i]==1)){
                    visited[i] = 1;
                    q.push(i);
                }
            }
        }
    }

    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        vector<int> visited(n, 0);
        int count = 0;
        
        for(int i=0; i<n; i++){
            if(visited[i]==0){
                count++;

                bfs(i, isConnected, visited);
            }
        }
        
        return count;
    }
    
    
    
 

    //Approach 1: Converting Adjacency Matrix to Adjacency List. Then applying BFS or DFS Traversal.
    void dfs(int node, vector<int> adj[], vector<int> &visited){
        visited[node] = 1;
        
        for(auto x: adj[node]){
            if(visited[x]==0){
                dfs(x, adj, visited);
            }
        }
    }
    
    
    int findCircleNum(vector<vector<int>>& isConnected) {
        
        int n = isConnected.size();
        
        vector<int> adj[n];
        
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(isConnected[i][j]==1 and i!=j){
                    adj[i].push_back(j);
                    adj[j].push_back(i);
                    
                    isConnected[i][j] = 0;
                    isConnected[j][i] = 1;
                }
            }
        }
        
        vector<int> visited(n,0);
        
        int ans = 0;
        for(int i=0; i<n; i++){
            if(visited[i]==0){
                ans++;
                dfs(i, adj, visited);
            }
        }
        
        return ans;
    }
};
