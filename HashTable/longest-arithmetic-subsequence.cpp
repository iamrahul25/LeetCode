class Solution {
public:
    int las(vector<int>& arr, int k){

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

    //Brute Force Approach: Time: O(N^2)
    int longestArithSeqLength(vector<int>& nums) {
        int ans = 0;
        int k = *max_element(nums.begin(), nums.end());

        for(int i=-k; i<=k; i++){
            ans = max(ans, las(nums, i));
        }

        return ans;
    }
};
