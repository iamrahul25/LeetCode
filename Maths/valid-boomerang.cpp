class Solution {
public:
    bool isBoomerang(vector<vector<int>>& points){
        
        int ax,ay,bx,by,cx,cy;
        
        ax = points[0][0];
        ay = points[0][1];
        
        bx = points[1][0];
        by = points[1][1];
        
        cx = points[2][0];
        cy = points[2][1];
        
        return !((ay-cy)*(ax-bx)==(ay-by)*(ax-cx));
    }
};
