class Solution {
public:
    
    //Approach 3: Bit Manipulation => Time O(N) Space: O(1)
    char findTheDifference(string s, string t) {
        int n = s.size();
        int xorr = 0;
        
        for(int i=0; i<n; i++){
            xorr = xorr ^ s[i];
            xorr = xorr ^ t[i];
        }
        
        xorr = xorr^t[n];
        
        return xorr;
    }
    
    
    //Approach 2: Aplhabet character sum. Time: O(N)  Space: O(1)
//     char findTheDifference(string s, string t){
//         int sum1 = 0;
//         int sum2 = 0;
        
//         int n = s.size();
//         for(int i=0; i<n; i++){
//             sum1 = sum1 + s[i];
//             sum2 = sum2 + t[i];
//         }
        
//         sum2 = sum2 + t[n];
        
//         return sum2-sum1;
//     }
    
    
    //Approach 1: Time Complexity: O(NlogN)  Space: O(1)
//     char findTheDifference(string s, string t) {
        
//         sort(s.begin(), s.end());
//         sort(t.begin(), t.end());
        
//         char ans = '-';
//         int n = s.size();
//         for(int i=0; i<n; i++){
//             if(s[i]!=t[i]){
//                 ans = t[i];
//                 break;
//             }
//         }
        
//         if(ans=='-'){
//             ans = t[n];
//         }
        
//         return ans;
//     }
    
};
