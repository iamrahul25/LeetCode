class Solution {
public:
    //Approach: Find the Element in Graph with Indegree == 0 
    //Time: O(Edges) Space: O(N)
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
        vector<int> arr(n, 0);

        for(int i=0; i<edges.size(); i++){
            int a = edges[i][1];
            arr[a]++;
        }

        vector<int> ans;
        for(int i=0; i<n; i++){
            if(arr[i]==0) ans.push_back(i);
        }
        return ans;
    }
};

//Link: https://leetcode.com/problems/minimum-number-of-vertices-to-reach-all-nodes/
