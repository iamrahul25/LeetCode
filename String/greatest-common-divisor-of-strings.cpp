class Solution {
public:

    //Time: O(N+M) Space: O(1)
    string gcdOfStrings(string str1, string str2) {
        int n = str1.size();
        int m = str2.size();

        if(n<m){
            swap(str1, str2);
            swap(n,m);
        }

        int hcf = __gcd(n,m);

        //Checking for String 2 (Smaller String)
        for(int i=0; i<m; i++){
            if(str2[i]!=str2[i%hcf]) return "";
        }

        //Checking for String 1 (Bigger String)
        for(int i=0; i<n; i++){
            if(str1[i]!=str2[i%hcf]) return "";
        }

        return str2.substr(0,hcf);
    }
};
