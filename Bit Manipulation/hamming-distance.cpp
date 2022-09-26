class Solution {
public:
    int hammingDistance(unsigned x, unsigned y) {
        int count = 0;
        
        if(x<=y){
            swap(x,y);
        }
        
        while(x!=0){
            if((x&1)!=(y&1)) count++;
            x = x>>1;
            y = y>>1;
        }
        
        return count;
    }
};
