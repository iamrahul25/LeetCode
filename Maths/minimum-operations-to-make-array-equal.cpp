class Solution {
public:
    
    //With Simply Formula 
    int minOperations(int n){
        return (n*n)/4;
    }
    
    
    
//Without Simply The Sn = n(2a + (n-1)d)/2 Formula.
    
//     int minOperations(int n) {
        
//         //Even Number
//         if(n%2==0){
//             n = n/2;
            
//             return (n*(2 + (n-1)*2))/2;
//         }
        
//         //Odd Number
//         else{
//             n = (n/2) + 1;
//             return (n*(n-1)*2)/2;
//         }
//     }
};
