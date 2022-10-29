class Solution {
public:
    //Time: O(N)  Space: O(1)
    bool judgeCircle(string moves) {
        int x = 0;
        int y = 0;
        
        for(int i=0; i<moves.size(); i++){
            switch(moves[i]){
                case 'U': y++; break;
                case 'D': y--; break;
                case 'L': x++; break;
                case 'R': x--; break;
            }
        }
        
        if(x==0 and y==0) return true;
        
        return false;
    }
};
