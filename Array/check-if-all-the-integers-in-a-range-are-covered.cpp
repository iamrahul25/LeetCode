class Solution {
public:
    
    //Optimise Approach: O(N)
    bool isCovered(vector<vector<int>>& ranges, int left, int right){
        
        int line[52] = {0};
        
        for(int i=0; i<ranges.size(); i++){
            int a = ranges[i][0];
            int b = ranges[i][1];
            
            line[a]++;
            line[b+1]--;
        }
        
        //Prefix Sum:
        int sum = 0;
        for(int i=0; i<51; i++){
            sum = sum + line[i];
            line[i] = sum;
        }
        
        for(int i=left; i<=right; i++){
            if(line[i]==0) return false;
        }
        
        return true;
    }
    
    //Brute Force: Time: O(N^2)  Space: O(1)
//     bool isCovered(vector<vector<int>>& ranges, int left, int right) {
        
//         for(int i=left; i<=right; i++){
            
//             bool flag = 0;
            
//             for(int j=0; j<ranges.size(); j++){
//                 if(i>=ranges[j][0] and i<=ranges[j][1]){
//                     flag = 1;
//                 }
//             }
            
//             if(flag==0) return false;
//         }
        
//         return true;
//     }
        
};
