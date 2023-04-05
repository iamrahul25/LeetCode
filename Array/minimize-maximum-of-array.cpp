class Solution {
public:

    //Approach 2: Prefix Sum: Time: O(N) Space: O(1)
    int minimizeArrayValue(vector<int>& arr) {
        long long ans = INT_MIN;
        long long sum  = 0;
        for(int i=0; i<arr.size(); i++){
            sum = sum + arr[i];
            long long val = ceil((double)sum/(i+1));
            ans = max(ans, val);
        }
        return ans;
    }

    //Approach 1: Binary Search  Time: O(NlogN) Space: O(1)
    // bool check(vector<int> &arr, int num){
    //     int n = arr.size();
    //     long long sum = 0;
    //     for(int i=0; i<n; i++){
    //         sum = sum + arr[i];
    //         if(sum>(long long)num*(i+1)) return false;
    //     }
    //     return true;
    // }

    // int minimizeArrayValue(vector<int>& arr) {
    //     long long lo = 1;
    //     long long hi = *max_element(arr.begin(), arr.end());
    //     long long ans = hi;

    //     while(lo<=hi){
    //         long long mid = (lo+hi)/2;
    //         if(check(arr,mid)==true){
    //             ans = min(ans, mid);
    //             hi = mid - 1;
    //         }
    //         else{
    //             lo = mid + 1;
    //         }
    //     }

    //     return ans;
    // }
};
