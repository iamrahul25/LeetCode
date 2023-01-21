class Solution {
public:

    //For Substring -> Of a String 
    string sub(string s, int i, int j){
        return s.substr(i, j-i+1);
    }

    //Check if the IP Address is Valid or Not
    bool valid(string s1, string s2, string s3, string s4){

        if(s1.size()>3 || s2.size()>3 || s3.size()>3 || s4.size()>3) return false;

        int a = stoi(s1);
        int b = stoi(s2);
        int c = stoi(s3);
        int d = stoi(s4);

        //Lies between 0 - 255
        if(a>255 || b>255 || c>255 || d>255) return false;
        
        //Trailing Zeros
        if(to_string(a)!=s1) return false;
        if(to_string(b)!=s2) return false;
        if(to_string(c)!=s3) return false;
        if(to_string(d)!=s4) return false;

        return true;
    }

    vector<string> restoreIpAddresses(string s) {

        int n = s.size();

        vector<string> ans;
        string s1,s2,s3,s4,s5;
        
        for(int i=0; i<n-3; i++){
            for(int j=i+1; j<n-2; j++){
                for(int k=j+1; k<n-1; k++){
                    s1 = sub(s,0,i);
                    s2 = sub(s,i+1,j);
                    s3 = sub(s,j+1,k);
                    s4 = sub(s,k+1,n-1);
                    
                    s5 = "";

                    if(valid(s1,s2,s3,s4)){
                        s5 = s5 + s1 + "." + s2 + "." + s3 + "." + s4;
                        ans.push_back(s5);
                    }
                }
            }
        }

        return ans;
    }
};
