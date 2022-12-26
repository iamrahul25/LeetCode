class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
        int n = points.size();
        int ans = -1;
        int minn = INT_MAX;

        for(int i=n-1; i>=0; i--){
            if(points[i][0]==x || points[i][1]==y){
                if(minn>=abs(points[i][0] - x) + abs(points[i][1] - y)){
                    ans = i;
                    minn = abs(points[i][0] - x) + abs(points[i][1] - y);
                }
            }
        }

        return ans;
    }
};
