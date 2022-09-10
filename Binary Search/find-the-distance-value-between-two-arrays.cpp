class Solution {
public:
    
    //Approach 2: Sorting + Binary Search   Time: O(NlogN) Space: O(1)
    int findTheDistanceValue(vector<int> &arr1, vector<int> &arr2, int d){
        sort(arr2.begin(), arr2.end());
        
        int c = 0;
        for(auto x: arr1){
            if(upper_bound(arr2.begin(),arr2.end(), x+d) == lower_bound(arr2.begin(),arr2.end(), x-d)){
                c++;
            }
        }
        
        return c;
    }
    
    
    //Approach 1: Brute Force: Time: O(N^2)  Space: O(1)
//     int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        
//         int n = arr1.size();
//         int m = arr2.size();
        
//         int c = n;
        
//         for(int i=0; i<n; i++){
//             for(int j=0; j<m; j++){
//                 if(abs(arr1[i]-arr2[j])<=d){
//                     c--;
//                     break;
//                 } 
//             }
//         }
        
//         return c;
//     }
};
