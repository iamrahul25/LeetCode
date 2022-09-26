class Solution {
public:
    
    //Approach 2: We can use array hash --> of 256 length which is faster than map. 
    bool isIsomorphic(string s, string t){
        int n = s.size();
        int hash1[256] = {0};
        int hash2[256] = {0};
        
        for(int i=0; i<n; i++){
            if(hash1[s[i]]!=hash2[t[i]]) return false;
            
            hash1[s[i]] = i+1;
            hash2[t[i]] = i+1;
        }

        return true;
    }
    
    //Approach 1: Time: O(N)  Space: O(N)
//     bool isIsomorphic(string s, string t){
        
//         if(s.size()!=t.size()){
//             return 0;
//         }

//         map<char, char> mpp1;
//         map<char, char> mpp2;

//         int n = s.size();

//         for(int i=0; i<n; i++){
//             mpp1.insert({s[i],t[i]});
//             mpp2.insert({t[i],s[i]});
//         }
        
//         for(int i=0; i<n; i++){
//             if(mpp1.find(s[i])==mpp1.end() or mpp2.find(t[i])==mpp2.end()) return false;
//             else if(mpp1[s[i]]!=t[i]  or mpp2[t[i]]!=s[i]) return false;
//         }
        
//         return true;
//     }
};
