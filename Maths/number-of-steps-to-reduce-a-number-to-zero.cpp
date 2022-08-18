class Solution {
public:
    long long minMoves(long long  target, long long maxDoubles) {
        long long cnt =0;
        
        while(target!=1){
            if(target%2!=0){
                target = target -1;
            }   
            else if(maxDoubles > 0){
                target = target/2;
                maxDoubles--;
            }      
            else{
                break;
            }      
            cnt++;
        }
        return cnt + target-1;
    }
};
