class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();


        if(digits[n-1]<=8){
            digits[n-1]++;
            return digits;
        }


        else{

            reverse(digits.begin(), digits.end());

            int r;

            for(int i=0; i<n; i++){

                if(digits[i]==9){
                    digits[i] = 0;
                    r = 1;
                }

                else{
                    digits[i]++;
                    r = 0;
                    break;
                }
            }

            if(r==1){
                digits.push_back(1);
            }

            reverse(digits.begin(), digits.end());

            return digits;
        }
    }
};
