class Solution {
public:
     long long int mySqrt(int x) {
        
        long long low = 1;
        long long high = x;

        long long mid;

        int ans=0;

        while(low<=high){

            mid = (low + high) / 2;

            if((mid*mid)==x){
                ans = mid;
                break;
            }

            else if((mid*mid) > x){
                high = mid-1;
            }

            else if((mid*mid) < x){
                low = mid+1;
                ans = mid;
            }
        }

        return ans;
    }
};
