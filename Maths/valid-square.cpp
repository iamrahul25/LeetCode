class Solution {
public:

    int distance(int x1, int x2, int y1, int y2){
        return ((x2-x1)*(x2-x1)) + ((y2-y1)*(y2-y1));
    }

    bool checkSquare(vector<int>& p1, vector<int>& p2, vector<int>& p3, vector<int>& p4){

        int ab = distance(p1[0], p2[0], p1[1], p2[1]);
        int bc = distance(p2[0], p3[0], p2[1], p3[1]);
        int cd = distance(p3[0], p4[0], p3[1], p4[1]);
        int da = distance(p4[0], p1[0], p4[1], p1[1]);

        int ac = distance(p1[0], p3[0], p1[1], p3[1]);
        int bd = distance(p2[0], p4[0], p2[1], p4[1]);

        //Any side is Zero: 
        if(ab==0 || bc==0 || cd==0 || da==0 || ac==0 || bd==0) return 0;
        else if(ab==bc and bc==cd and cd==da and ac==bd) return 1;
        else return 0;
    }


    bool validSquare(vector<int>& p1, vector<int>& p2, vector<int>& p3, vector<int>& p4) {
        
        if(checkSquare(p1,p2,p3,p4) || checkSquare(p1,p3,p2,p4) || checkSquare(p1,p2,p4,p3)) return true;

        return false;
    }
};
