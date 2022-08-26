class Solution {
public:
    
    
    //Approach 2: Using 2 pointer Approach. 
    bool judgeSquareSum(int c) {
        
        int root = sqrt(c);
        
        long long p1 = 0;
        long long p2 = root;
        
        while(p1<=p2){
            
            if((p1*p1) + (p2*p2) == c){
                return true;
            }
            
            if((p1*p1) + (p2*p2) > c){
                p2--;
            }
            
            if((p1*p1) + (p2*p2) < c){
                p1++;
            }
            
        }
        
        return false;
    }
    
    
    
    
    //Approach 1: Brute Force   Time: O(N^2)  --> TLE Error (98/127) Test Case Passed. 
//     bool judgeSquareSum(int c) {
        
//         long long root = sqrt(c);
        
//         for(long long i=0; i<=root; i++){
//             for(long long j=0; j<=root; j++){
                
//                 if((i*i) + (j*j) == c){
//                     return true;
//                 }
//             }
//         }
        
//         return false;
// }
    
};
