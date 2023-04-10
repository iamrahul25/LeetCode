class Solution {
public:

    //This Problem is Topological Sort -> Can be solve using BFS or DFS
    bool canFinish(int n, vector<vector<int>>& edges) {
        vector<int> adj[n];
        vector<int> indegree(n,0);

        for(int i=0; i<edges.size(); i++){
            adj[edges[i][1]].push_back(edges[i][0]);
            indegree[edges[i][0]]++;
        }

        vector<int> ans;
        queue<int> q;
        for(int i=0; i<n; i++){
            if(indegree[i]==0) q.push(i);
        }

        while(!q.empty()){
            int node = q.front();
            for(auto x: adj[node]){
                indegree[x]--;
                if(indegree[x]==0) q.push(x);
            }
            ans.push_back(node);
            q.pop();
        }

        if(ans.size()==n) return 1;
        return 0;
    }
};
