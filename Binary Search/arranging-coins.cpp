class Solution {
public:
    //Time Complexity : O(logN)  Space: O(1)
    int arrangeCoins(int n) {
        
        long long low = 1;
        long long high = n;

        long long mid = (low+high)/2;

        int ans=0;

        while(low<=high){


            mid = (low + high) / 2;

            // cout<<"low: "<<low<<" high: "<<high<<" mid: "<<mid<<endl;

            if(((mid*(mid+1))/2)==n){
                ans = mid;
                break;
            }

            else if(((mid*(mid+1))/2) > n){
                high = mid-1;
            }

            else if(((mid*(mid+1))/2) < n){
                low = mid+1;
                ans = mid;
            }
        }

        return ans;
    }
};
