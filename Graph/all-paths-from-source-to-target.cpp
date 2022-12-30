class Solution {
public:

    //Approach 1: DFS Traversal 
    vector<vector<int>> ans;

    void dfs(int node, int n, vector<vector<int>>& graph, vector<int>&arr){
        arr.push_back(node);

        if(node==n) ans.push_back(arr);

        for(auto x: graph[node]){
            dfs(x, n, graph, arr);
        }

        arr.pop_back();
    }

    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph){
        vector<int> arr;
        int n = graph.size();
        dfs(0,n-1, graph, arr);

        return ans;
    }
};
