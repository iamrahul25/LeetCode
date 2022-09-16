class Solution {
public:
    
    //Optimise: Sqrt(N)
    
    
    
    //Brute Force: Time O(N)
    int kthFactor(int n, int k) {
        
        int f = 0;
        int ans = -1;
        
        for(int i=1; i<=n; i++){
            if(n%i==0){
                f++;
            }
            
            if(f==k){
                ans = i;
                break;
            }
        }
        
        return ans;
    }
    
    
};


