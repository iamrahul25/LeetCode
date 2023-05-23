class Solution {
public:

    //Problem: Graph Problem -> Connected Components -> BFS or DFS Traversal. 
    int countCompleteComponents(int n, vector<vector<int>>& edges) {
        vector<int> adjList[n];

        for(int i=0; i<edges.size(); i++){
            adjList[edges[i][0]].push_back(edges[i][1]);
            adjList[edges[i][1]].push_back(edges[i][0]);
        }

        vector<int> visited(n, 0);
        int ans = 0;

        for(int i=0; i<n; i++){
            if(visited[i]==0){
                visited[i] = 1;

                //BFS Traversal
                queue<int> q;
                q.push(i);
                vector<int> arr;

                while(!q.empty()){
    
                    int node = q.front();

                    for(auto x: adjList[node]){
                        if(visited[x]==0) {
                            visited[x] = 1;
                            q.push(x);
                        }
                    }
                    arr.push_back(node);
                    q.pop();
                }

                bool isconnected = 1;
                for(auto x: arr){
                    if(adjList[x].size()!=arr.size()-1){
                        isconnected = 0;
                        break;
                    }
                }
                if(isconnected) ans++;
            }
        }

        return ans;
    }
};

//Link: https://leetcode.com/problems/count-the-number-of-complete-components/
