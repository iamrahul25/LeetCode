class Solution {
public:
    int digits_sqr(int n){

        int sum = 0;

        while(n!=0){
            sum = sum + ((n%10)*(n%10));
            n = n/10;
        }

        return sum;
    }

    bool isHappy(int n){

        unordered_set<int> s;

        while(digits_sqr(n)!=1){

            if(s.find(n)==s.end()){
                s.insert(n);
            }

            else{
                return 0;
            }

            n = digits_sqr(n);
        }

        return 1;
    }
    
};
