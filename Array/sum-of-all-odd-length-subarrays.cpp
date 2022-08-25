class Solution {
public:
    
//Approach 2: Time: O(N)  Space: O(1)
    int sumOddLengthSubarrays(vector<int>& arr){
        int n = arr.size();
        
        int sum = 0;
        
        for(int i=0; i<n; i++){
            int x = ((n-i) * (i+1)) - (((n-i) * (i+1)/2));
            sum = sum + (arr[i] * x);
        }
        
        return sum;
        
    }

//Approach 1: Time: O(N^3)  Space: O(1)
//     int sumOddLengthSubarrays(vector<int>& arr) {
//         int n = arr.size();
        
//         int sum = 0;
        
//         for(int i=0; i<n; i++){
            
//             for(int j=i; j<n; j++){
                
//                 //Odd Length
//                 if((j-i+1)%2==1){
                    
//                     for(int k=i; k<=j; k++){
//                         sum = sum + arr[k];
//                     }
//                 }
//             }
//         }
        
//         return sum;
//     }
    
};
