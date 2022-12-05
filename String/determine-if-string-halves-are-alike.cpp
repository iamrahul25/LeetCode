class Solution {
public:
    bool halvesAreAlike(string s) {
        
        int n = s.length();
        string a = s.substr(0,(n/2));
        string b = s.substr(n/2, n);
        
        unordered_set<char> sets = {'a','e','i','o','u','A','E','I','O','U'};
        
        int c1=0, c2=0;
        
        for(int i=0; i<n/2; i++){
            if(sets.find(a[i])!=sets.end()) c1++;
            if(sets.find(b[i])!=sets.end()) c2++;
        }
        
        return c1==c2;
    }
};
