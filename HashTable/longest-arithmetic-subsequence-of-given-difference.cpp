class Solution {
public:
    //Approach 1: Brute Force --- TLE Error! (34/39) Test Case Passed!
    //Time: O(N^2)  Space: O(1)
    // int longestSubsequence(vector<int>& arr, int difference){

    //     int n = arr.size();
    //     int k = difference;

    //     int maxlen= 0;

    //     for(int i=0; i<n; i++){
    //         int c = 1;
    //         int prev = arr[i];
    //         for(int j=i+1; j<n; j++){
    //             if(arr[j]-prev==k){
    //                 c++;
    //                 prev = arr[j];
    //             }
    //         }

    //         maxlen = max(maxlen, c);
    //     }
        
    //     return maxlen;
    // }

    //Using Map Time: O(N) Space: O(N) --- All Test Case Passed! 
    int longestSubsequence(vector<int>& arr, int k){

        int n = arr.size();
        unordered_map<int,int> mp;

        int maxlen = 0;

        for(int i=0; i<n; i++){
            int x = arr[i] - k;
            //Found!
            if(mp.find(x)!=mp.end()){
                mp[arr[i]] = mp[x] + 1;
            }
            //NotFound!
            else{
                mp[arr[i]] = 1;
            }

            maxlen = max(maxlen, mp[arr[i]]);
        }

        return maxlen;
    }
};
