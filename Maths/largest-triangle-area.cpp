class Solution {
public:
    double largestTriangleArea(vector<vector<int>>& points){
        
        int n = points.size();
        double maxarea = 0;
        
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                for(int k=j+1; k<n; k++){
                    int x1 = points[i][0], y1 = points[i][1];
                    int x2 = points[j][0], y2 = points[j][1];
                    int x3 = points[k][0], y3 = points[k][1];
                    double area = abs((x1*y2 - x2*y1) + (x2*y3 - x3*y2) + (x3*y1 - x1*y3))/2.0;
                    maxarea = max(maxarea, area);
                }
            }
        }
        
        return maxarea;
    }
    
};
