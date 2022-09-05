class Solution {
public:
    
    //We can write shorter code by removing redundancy in the code. 
    long long smallestNumber(long long num){

        //When no. is Negative: We have to make -ive largest possible number.
        if(num<0){
            num = abs(num);
            
            //Hash of '0' to '9'
            int hash[10] = {0};
            
            while(num!=0){
                int d = num%10;
                hash[d]++;
                num = num/10;
            }
            
            long long ans = 0;
            for(int i=9; i>=0; i--){
                while(hash[i]!=0){
                    ans = (ans*10) + i;
                    hash[i]--;
                }
            }
            
            return -ans;
            
        }
        
        //When no. is positive: We have to make +ive smallest possible number without leading zeros. 
        else{
            
            //Hash of '0' to '9'
            int hash[10] = {0};
            
            while(num!=0){
                int d = num%10;
                hash[d]++;
                num = num/10;
            }
            
            long long int ans = 0;
            
            //Setting up 1st non-zero digit. 
            for(int i = 1; i<10; i++){
                if(hash[i]!=0){
                    ans = i;
                    hash[i]--;
                    break;
                }
            }
            
            //Setting remaining digits
            for(int i=0; i<10; i++){
                while(hash[i]!=0){
                    ans = (ans*10) + i;
                    hash[i]--;
                }
            }
            
            return ans;
        }
        
    }
};
