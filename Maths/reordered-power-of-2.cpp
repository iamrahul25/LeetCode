class Solution {
public:
    bool reorderedPowerOf2(int n) {
        
        string num = to_string(n);
        
        //Sorting string
        sort(num.begin(), num.end());
        
        do{
            // cout<<num<<endl;
            
            //Avoiding Leading Zero's
            if(num[0]=='0') continue;
            
            //Converting String to Integer
            int x = stoll(num);
            
            //Check power of 2 
            if((x & (x-1))==0) return true;
            
        }while(next_permutation(num.begin(), num.end()));
        
        return false;
    }
};
