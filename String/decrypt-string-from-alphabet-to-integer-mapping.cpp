class Solution {
public:
    string freqAlphabets(string s) {
        int n = s.size();
        string ans;
        
        int i = 0;

        while(i<n){
            if((i+2)<n and s[i+2]=='#'){
                int num = ((s[i]-'0')*10) + s[i+1]-'0';
                char c = 'a' + (num-1);
                ans.push_back(c);
                i = i+3;
            }
            else{
                char c = 'a' + (s[i]- '0') -1;
                ans.push_back(c);
                i++;
            }
        }

        return ans;
    }
};
