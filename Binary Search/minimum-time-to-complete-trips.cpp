class Solution {
public:

    long long calc(vector<int>&arr, long long n){
        long long c = 0;
        for(int i=0; i<arr.size(); i++){
            c = c + (n/arr[i]);
        }
        return c;
    }

    //Binary Search Problem: Time: O(NlogN) Space: O(1)
    long long minimumTime(vector<int>&time, long long totalTrips) {
        sort(time.begin(), time.end());
        int n = time.size();

        long long low = 1;
        long long high = time[0]*totalTrips;
        long long ans = time[0]*totalTrips;

        while(low<=high){
            long long mid = (low+high)/2;
            long long value = calc(time, mid);
            if(value < totalTrips){
                low = mid + 1;
            }
            else{
                ans = min(ans, mid);
                high = mid - 1;
            }
        }
        return ans;
    }
};
