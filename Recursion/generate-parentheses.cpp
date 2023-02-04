//Link: https://leetcode.com/problems/generate-parentheses/

class Solution {
public:

    //Recursion Problem: Time: O(2^n) Space: O(1) + O(N) Stack Space
    vector<string> ans;
    void parenthesis(int open, int close, int n, string &s){
        //Base Case: 
        int l = s.size();
        if(l==2*n) ans.push_back(s);

        if(open<n){
            s.push_back('(');
            parenthesis(open+1, close, n, s);
            s.pop_back();
        }

        if(open>close){
            s.push_back(')');
            parenthesis(open,close+1,n,s);
            s.pop_back();
        }
    }


    vector<string> generateParenthesis(int n){
        string s = "(";
        parenthesis(1,0,n,s);
        return ans;
    }
};
