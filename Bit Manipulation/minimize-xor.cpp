class Solution {
public:
    //Time: O(32) Space: O(1)
    int minimizeXor(int num1, int num2) {

        //Count no. of setbits in NUM2:
        int setbits = 0;
        for(int i=0; i<32; i++){
            if(num2 & (1<<i)) setbits++;
        }

        int ans = 0;
        //Forward Loop
        for(int i=31; i>=0; i--){
            if(setbits==0) break;
            if(num1 & (1<<i)){
                ans = ans | (1<<i);
                setbits--;
            }
        }

        //Backward Loop
        for(int i=0; i<32; i++){
            if(setbits==0) break;
            if((ans&(1<<i))==0){
                ans = ans | (1<<i);
                setbits--;
            }
        }

        return ans;
    }
};
