class Solution {
public:
     long long int mySqrt(int x) {
        
        if(x==0 or x==1)return x;
        
        long long int  i = 1;
        long long int temp = 1;
        while(i*i<=x){
            temp = i*i;
            i++;
        }
        return i-1;
    }
};
