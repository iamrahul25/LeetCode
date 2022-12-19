class Solution {
public:

    //Question on DFS Traversal of Graph
    void dfs(int src, vector<int> adjList[], vector<int>&visited){
        for(auto x: adjList[src]){
            if(visited[x]==0){
                visited[x] = 1;
                dfs(x, adjList, visited);
            }
        }
    }


    bool validPath(int n, vector<vector<int>>& edges, int source, int destination){

        if(n==1) return true;

        vector<int> adjList[n];

        for(int i=0; i<edges.size(); i++){
            int x = edges[i][0];
            int y = edges[i][1];

            adjList[x].push_back(y);
            adjList[y].push_back(x);
        }

        vector<int> visited(n, 0);
        dfs(source, adjList, visited);

        return visited[destination];
    }
};
