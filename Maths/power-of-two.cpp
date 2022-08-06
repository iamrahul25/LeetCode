class Solution {
public:
    bool isPowerOfTwo(long long int n) {
        
        //Method 1-----------------:
        
        //if(n==0) return false;
        //if(ceil(log2(n)) == floor(log2(n))) return true;
        //return false;
        
        
        //Method 2-----------------:
        //if(n==0) return false;
        
        // while(n!=1){
        //     if(n%2!=0){
        //         return false;
        //     }
        //     n = n/2;
        // }
        // return true;
        
        
        //Method 3:------------Bit Manipulation.
        
        if(n==0) return false;
        
        if((n & (n-1))==0){
            return true;
        }
        else{
            return false;
        }
        
    }
};
