class Solution {
public:
    //Time: O(N) Space: O(1)
    int compress(vector<char>& chars) {
        int c = 0;
        char x = chars[0];
        int j = 0;

        for(int i=0; i<chars.size(); i++){
            if(chars[i]==x){
                c++;
            }
            else{
                chars[j++] = x;
                if(c>1){
                    string num = to_string(c);
                    for(auto a: num){
                        chars[j++] = a;
                    }
                }
                c = 1;
                x = chars[i];
            }
        }

        chars[j++] = x;
        if(c>1){
            string num = to_string(c);
            for(auto a: num){
                chars[j++] = a;
            }
        }
        
        return j;
    }
};
