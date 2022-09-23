class Solution {
public:
    
    //Approach: Brute Force Method
    bool good(int n){
        
        int len = 0;
        int c = 0;

        while(n!=0){
            int d = n%10;
            
            if(d==3 or d==4 or d==7) return false;
            else if(d==0 or d==1 or d==8) c++;
            
            n = n/10;
            len++;
        }
        
        if(len==c) return false;
        
        return true;
    }
    
    
    int rotatedDigits(int n) {
        
        int count = 0;
        
        for(int i=1; i<=n; i++){
            if(good(i)) count++;
        }
        
        return count;
    }
};
