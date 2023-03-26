class Solution {
public:
    vector<long long> minOperations(vector<int>& nums, vector<int>& queries) {
        long long n = nums.size();
        long long q = queries.size();

        //Sorting the nums array
        sort(nums.begin(), nums.end());

        //Create Prefix Sum array.
        vector<long long> presum(n, 0);
        long long sum = 0;

        for(int i=0; i<n; i++){
            sum = sum + nums[i];
            presum[i] = sum;
        }

        //Answer Vector
        vector<long long> ans(q, 0);

        //Traverse in Queries
        for(long long i=0; i<q; i++){
            long long query = queries[i];

            if(query<=nums[0]){
                ans[i] = presum[n-1] - (n*query);
            }
            else if(query>=nums[n-1]){
                ans[i] = (n*query) - presum[n-1];
            }
            else{
                //Apply Binary Search (LowerBound) to find the index of element
                long long idx = lower_bound(nums.begin(), nums.end(), query) - nums.begin();
                ans[i] = ((query*idx)-presum[idx-1]) + ((presum[n-1]-presum[idx-1]) - (query*(n-idx)));
            }
        }
        
        return ans;
    }
};
