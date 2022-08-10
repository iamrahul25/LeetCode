class Solution {
public:
    bool isSubsequence(string s, string t) {
        
        //It Complexity O(N+M)  Not O(N^2)
        int last = 0;
        
        string str = "";
        
        for(int i=0; i<s.length(); i++){
            for(int j=last; j<t.length(); j++){
                if(s[i]==t[j]){
                    last = j+1;
                    str = str + s[i];
                    break;
                }
            }
        }
        
        cout<<str<<endl;
        
        if(str==s){
            return 1;
        }
        else{
            return 0;
        }
    }
};
