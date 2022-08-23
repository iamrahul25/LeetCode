class Solution {
public:
    
    int count_setbits(unsigned int n){
        int c = 0;
        
        while(n!=0){
            if(n&1==1) c++;
            n = n>>1;
        }

        return c;
    }
    
    
    int hammingWeight(uint32_t n) {
        
        return count_setbits(n);
    }
};
