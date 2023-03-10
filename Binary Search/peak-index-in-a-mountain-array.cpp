class Solution {
public:

    //Approach 1: Brute Force Time: O(N) Space: O(1)
    int peakIndexInMountainArray(vector<int>& arr){
        int idx = max_element(arr.begin(), arr.end()) - arr.begin();
        return idx;
    }
};
