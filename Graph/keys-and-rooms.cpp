class Solution {
public:

    //Approach 1: DFS Traversal.
    void dfs(int n, vector<vector<int>>&adjList, vector<int>&visited){
        for(auto x: adjList[n]){
            if(visited[x]==0){
                visited[x]=1;
                dfs(x, adjList, visited);
            }
        }
    }

    //Approach 2: BFS Traversal.

    bool canVisitAllRooms(vector<vector<int>>& rooms){

        int n = rooms.size();

        vector<int> visited(n, 0);
        visited[0] = 1;

        dfs(0, rooms, visited);

        for(auto x: visited){
            if(x==0) return false;
        }
        return true;
    }
};
