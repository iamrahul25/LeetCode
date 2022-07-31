class Solution {
public:
    bool isValid(string s) {
        
        vector<char> v;

        for(int i=0; i<s.size(); i++){
            if(s[i]=='(' or s[i]=='{' or s[i]=='['){
                v.push_back(s[i]);
            }

            else{

                if(v.size()==0){
                    return 0;
                }

                int last = v[v.size() - 1];

                if(last=='(' and s[i]==')'){
                    v.pop_back();
                }

                else if(last=='[' and s[i]==']'){
                    v.pop_back();
                }

                else if(last=='{' and s[i]=='}'){
                    v.pop_back();
                }

                else{
                    return 0;
                }
            }
        }

        if(v.size()==0){
            return 1;
        }

        else{
            return 0;
        }
        
    }
};
