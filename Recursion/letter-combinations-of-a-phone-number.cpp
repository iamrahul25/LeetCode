class Solution {
public:

    //Time: O(N^digits)
    void recursion(int i, string &s, string &digits, vector<string>&ans, vector<string>&vec){
        if(i==digits.size()){
            ans.push_back(s);
            return;
        }

        for(auto c: vec[digits[i]-'0']){
            s.push_back(c);
            recursion(i+1, s, digits, ans, vec);
            s.pop_back();
        }
    }

    vector<string> letterCombinations(string digits) {
        if(digits.size()==0) return {};

        string s = "";
        vector<string> ans;
        vector<string> vec = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

        recursion(0,s, digits, ans, vec);
        return ans;
    }
};
