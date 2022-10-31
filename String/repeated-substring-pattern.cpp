class Solution {
public:
    //Approach 1: Brute Force: Time: O(N^2) --> TLE Error. 
    /*bool repeatedSubstringPattern(string s) {
        
        int n = s.size();
        int flag = 0;
        
        for(int i=1; (i<=(n/2)) and (flag==0); i++){
            // cout<<"i: "<<i<<endl;
            string str = "";
            
            if(n%i==0){
                int l = (n/i);
                while(l--){
                    str = str + s.substr(0,i);
                }
            }
            
            // cout<<str<<endl;
            
            if(str==s){
                flag = 1;
            }
        }
        
        return flag;
    } */
    
    //Approach 2: Optimse: Time: O(N)
    bool repeatedSubstringPattern(string s) {
        int n = s.size();
        string post = s.substr(1,n-1);
        string pre = s.substr(0,n-1);
        string final = post + pre;
        
        if(final.find(s)==-1) return false;
        else return true;
    }
};
