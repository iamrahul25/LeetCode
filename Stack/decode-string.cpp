class Solution {
public:
    string decodeString(string s){
        
        stack<char> st;
        
        for(int i=0; i<s.size(); i++){
            
            // cout<<s[i]<<" ";
            
            if(s[i]==']'){
                string temp = "";
                
                //For String.
                while(st.top()!='['){
                    temp = temp + st.top();
                    st.pop();
                }
                
                //For Removing '[';
                st.pop();
                
                reverse(temp.begin(), temp.end());
                // cout<<endl<<"String is: "<<temp<<endl;
                
                
                // For Getting Number
                int num = 0;
                int p = 1;
                while(!st.empty()){
                    if(st.top()<'0' or st.top()>'9') break;
                    num = num + ((st.top() - 48)*p);
                    p = p*10;
                    st.pop();
                }
                
                // cout<<"Num: "<<num<<endl<<endl;
                
                //Push String into string * num => times. 
                for(int i=0; i<num; i++){
                    for(int j=0; j<temp.size(); j++){
                        st.push(temp[j]);
                    }
                }
                
            }
            
            else{
                st.push(s[i]);
            }
        }
        
        string ans = "";
        while(!st.empty()){
            ans = ans + st.top();
            st.pop();
        }
        
        //Reverse final string.
        reverse(ans.begin(), ans.end());
    
        return ans;
        
    }
};
