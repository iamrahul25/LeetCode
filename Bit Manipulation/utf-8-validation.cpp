class Solution {
public:
    bool validUtf8(vector<int>& data) {
        
        //Binary Representation of Some Numbers. 
        //  0  : 00000000
        //  128: 10000000
        //  192: 11000000
        //  224: 11100000
        //  240: 11110000
        //  248: 11111000
        
        int n = data.size();
        int i=0;
        
        while(i<n){
            
            //One
            if((data[i] & 128) == 0){
                i++;
            }
            
            //Two
            else if((data[i] & 224) == 192){
                
                if((i+1)>=n) return false;
                else if((data[i+1]&192)!=128) return false;
                
                i = i+2;
                
            }
            
            //Three
            else if((data[i] &240) == 224){
                
                if((i+2)>=n) return false;
                
                else if((data[i+1]&192)!=128) return false;
                else if((data[i+2]&192)!=128) return false;
                
                i = i+3;
            }
            
            //Four
            else if((data[i]&248) == 240){
                
                if((i+3)>=n) return false;
                
                else if((data[i+1]&192)!=128) return false;
                else if((data[i+2]&192)!=128) return false;
                else if((data[i+3]&192)!=128) return false;
                
                i = i+4;
            }
            
            else{
                return false;
            }
        }
        
        return true;
    }
};
