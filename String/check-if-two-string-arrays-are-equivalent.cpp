class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string s1 = "";
        string s2 = "";
        
        for(auto x: word1){
            s1 = s1 + x;
        }
        
        for(auto x: word2){
            s2 = s2 + x;
        }
        
        if(s1==s2) return 1;
        else return 0;
    }
};
