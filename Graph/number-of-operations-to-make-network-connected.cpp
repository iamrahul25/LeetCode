class Solution {
public:
    //In this Problem we have to count number of disconnected components.
    //Can be solved using BFS/DFS
    int makeConnected(int n, vector<vector<int>>& connections) {
        vector<vector<int>> list(n);

        for(int i=0; i<connections.size(); i++){
            list[connections[i][0]].push_back(connections[i][1]);
            list[connections[i][1]].push_back(connections[i][0]);
        }

        vector<int> visited(n, 0);
        queue<int> q;
        int count = 0;

        for(int i=0; i<n; i++){

            if(visited[i]==0){
                count++;
                q.push(i);
                visited[i] = 1;

                while(!q.empty()){
                    int front = q.front();
                    for(auto x: list[front]){
                        if(visited[x]==0){
                            visited[x] = 1;
                            q.push(x);
                        }
                    }
                    q.pop();
                }
            }
        }

        if(connections.size()<n-1) return -1;
        else return count-1;
        
    }
};
