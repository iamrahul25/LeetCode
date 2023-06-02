class Solution {
public:
    //Graph Problem: Time: O(N^2) Space: O(N^2)
    int maximumDetonation(vector<vector<int>>& bombs) {
        
        int n = bombs.size();
        vector<int> adjList[n];

        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(i!=j){
                    long long x = bombs[i][0] - bombs[j][0];
                    long long y = bombs[i][1] - bombs[j][1];
                    long long r = bombs[i][2];

                    if(r*r>=(x*x)+(y*y)){
                        adjList[i].push_back(j);
                    }
                }
            }
        }

        int ans = 0;

        for(int i=0; i<n; i++){

            vector<int> visited(n, 0);
            int count = 0;
            
            if(visited[i]==0){
                visited[i] = 1;

                //BFS Traversal
                queue<int> q;
                q.push(i);

                while(!q.empty()){
                    int node = q.front();
                    for(auto x: adjList[node]){
                        if(visited[x]==0) {
                            visited[x] = 1;
                            q.push(x);
                        }
                    }
                    q.pop();
                    count++;
                }
            }
            ans = max(ans, count);
        }

        return ans;
    }
};

//Link: https://leetcode.com/problems/detonate-the-maximum-bombs/
