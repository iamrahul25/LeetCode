class Solution {
public:
    bool isPerfectSquare(int num) {
        
        long long low = 1;
        long long high = num;

        long long mid = (low+high)/2;

        while(low<=high){

            // cout<<"low: "<<low<<" high: "<<high<<" mid: "<<mid<<endl;

            mid = (low + high) / 2;

            if((mid*mid)==num){
                return 1;
            }

            else if((mid*mid) > num){
                high = mid-1;
            }

            else if((mid*mid)<num){
                low = mid+1;
            }
        }

        return 0;
    }
};
