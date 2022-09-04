class Solution {
public:
    //Approach 2: Simple Approach: Sorting.  Time: O(NlogN)  Space: O(1)
    string longestCommonPrefix(vector<string>& strs) {
        
        int n = strs.size();
        
        //Sorting
        sort(strs.begin(), strs.end());
        
        for(auto x: strs){
            cout<<x<<" ";
        }
        
        string ans = "";
        string a = strs[0];
        string b = strs[n-1];
        
        int len = min(a.size(), b.size());
        
        for(int i=0; i<len; i++){
            if(a[i]==b[i]){
                ans = ans + a[i];
            }
            else{
                break;
            }
        }
        
        return ans;
    }
    
    
    
    //Approach 1: Little Bit => Long.    (But Faster than Above approach)
    //Time: O(S*N)   S-> length of smallest string.  
    //Space: O(1)
        
//     string longestCommonPrefix(vector<string>& strs) {
        
//         //Finding smallest string among all strings. 
//         int small = INT_MAX;
        
//         for(auto x: strs){
//             if(x.size()<small){
//                 small = x.size();
//             }
//         }
        
//         string s = strs[0].substr(0,small);
//         cout<<s<<endl;
        
//         for(int i=0; i<strs.size(); i++){
//             for(int j=0; j<small; j++){
//                 if(strs[i][j]!=s[j]){
//                     s[j] = '-';
//                 }
//             }
//         }
        
//         cout<<s<<endl;
        
//         string ans = "";
//         int i=0;
        
//         while(s[i]!='-' and i<s.size()){
//             ans = ans + s[i++];
//         }
        
//         return ans;
        
//     }
    
};
