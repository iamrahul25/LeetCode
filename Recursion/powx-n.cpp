class Solution {
public:
    double myPow(double x, long long int n) {
        
        if(n<0){
            return (1/myPow(x,-1*n));
        }

        if(n==0){
            return 1;
        }

        if(n==2){
            return x*x;
        }

        if(n%2==0){
            return myPow(myPow(x,n/2),2);
        }

        else{
            return  myPow(myPow(x,n/2),2) * x;
        }
    }
};
