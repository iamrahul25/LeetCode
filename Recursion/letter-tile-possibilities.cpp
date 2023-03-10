class Solution {
public:

    //Function to Find all Subsequence of a String. 
    void subsequence(string str, string s, int i, unordered_set<string> &st){
        if(i>=str.size()){
            st.insert(s); return;
        }

        //Pick
        s.push_back(str[i]); subsequence(str, s, i+1, st);
        
        //Not Pick:
        s.pop_back(); subsequence(str, s, i+1, st);
    }

    int numTilePossibilities(string s) {
        sort(s.begin(), s.end());
        unordered_set<string> st;
        subsequence(s,"",0, st);

        int n = s.size();
        int fact[] = {1,1,2,6,24,120,720,5040};
        int ans = 0;

        for(auto x: st){
            int hash[26] = {0};
            int p = fact[x.size()];

            for(int i=0; i<x.size(); i++){
                hash[x[i]-'A']++;
                p = p/hash[x[i]-'A'];
            }
            ans = ans + p;
            // cout<<"S: "<<x<<" P: "<<p<<endl;
        }
        
        return ans-1;
    }
};
