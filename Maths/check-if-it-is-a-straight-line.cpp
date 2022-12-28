class Solution {
public:

    //Mathematics - Time: O(N)  Space: O(1)
    bool checkStraightLine(vector<vector<int>>& coord){

        int n = coord.size();
        sort(coord.begin(), coord.end());

        float slope = (1.0*(coord[1][1] - coord[0][1]))/(coord[1][0] - coord[0][0]);

        for(int i=1; i<n; i++){
            float currslope = (1.0*(coord[i][1] - coord[i-1][1]))/(coord[i][0] - coord[i-1][0]);
            if(slope !=currslope) return false;
        }

        return true;

    }
};
