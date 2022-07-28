class Solution {
public:
    bool isPalindrome(int x) {

        if(x<0){
            return 0;
        }

        long long int num = x;
        long long int num2 = x;

        long long int count = 0;
        while(num!=0){
            num = num/10;
            count++;
        }

        //Sum
        long long int sum = 0;
        long long int a, b = 1;

        long long int p = count-1;
        
        for(long long int i=0; i<count; i++){
            a = pow(10, p);
            b = num2%10;

            sum = sum + (a*b);

            p--;
            num2 = num2/10;

            // cout<<a<<" "<<b<<" "<<sum<<endl;
        }

        if(sum==x){
            return 1;
        }
        else{
            return 0;
        }
    }
    
};
