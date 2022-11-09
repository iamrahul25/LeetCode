class Solution {
public:
    //***In this Problem we have to find number of disconnected graph. ***//
    //Approach 2: BFS Traversal  (Breadth First Search) 
    
    
    
    
    
    
    //Approach 1: DFS Traversal
    //Converting Adjacency Matrix to Adjacency List. Then DFS Traversal.
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
