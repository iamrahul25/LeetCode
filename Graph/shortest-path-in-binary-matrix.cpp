class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int n = grid.size();
        if(grid[0][0]==1) return -1;

        int mindis = INT_MAX;

        vector<vector<int>> visited(n, vector<int>(n, 0));
        queue<pair<int, pair<int,int>>> q;
        q.push({1,{0,0}});
        visited[0][0] = 1; //Visited

        int arrx[] = {-1,-1,-1,0,0,1,1,1};
        int arry[] = {-1,0,1,-1,1,-1,0,1};

        while(!q.empty()){
            int d = q.front().first;
            int i = q.front().second.first;
            int j = q.front().second.second;

            if(i==n-1 and j==n-1 and grid[i][j]==0){
                mindis = min(mindis, d);
            }

            for(int k=0; k<8; k++){
                int a = arrx[k] + i;
                int b = arry[k] + j;

                if(a>=0 and a<n and b>=0 and b<n){
                    if(grid[a][b]==0 and visited[a][b]==0){
                        q.push({d+1,{a,b}});
                        visited[a][b] = 1;
                    }   
                }
            }

            q.pop();
        }
        
        if(mindis==INT_MAX) return -1;
        return mindis;
    }
};
