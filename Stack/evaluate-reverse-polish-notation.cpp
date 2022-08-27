class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        
        stack<string> st;
    
        for(int i=0; i<tokens.size(); i++){

            if(tokens[i]=="+" or tokens[i]=="-" or tokens[i]=="*" or tokens[i]=="/"){

                int a = stoi(st.top()); 
                st.pop();
                int b = stoi(st.top()); 
                st.pop();

                if(tokens[i]=="+"){
                    st.push(to_string(a+b));
                }
                else if(tokens[i]=="-"){
                    st.push(to_string(b-a));
                }
                else if(tokens[i]=="*"){
                    st.push(to_string(a*b));
                }
                else if(tokens[i]=="/"){
                    st.push(to_string(b/a));
                }

            }

            else{
                st.push(tokens[i]);
            }
        }


        return stoi(st.top());
        
    }
};
