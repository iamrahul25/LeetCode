class Solution {
public:

    //Time: O(N)  Space: O(N)
    int subarraysDivByK(vector<int>& nums, int k){
        int n = nums.size();
        unordered_map<int,int> mp;

        int sum = 0;
        int count = 0;

        for(int i=0; i<n; i++){

            sum = sum + nums[i];
            int x = sum%k;

            if(x==0) count++;

            if(mp.find(x)!=mp.end()) count = count + mp[x];

            //Negative Element
            if(x>=0){
                if(mp.find(-k+x)!=mp.end()) count = count + mp[-k+x];
            }
            //Positive Element
            else{
                if(mp.find(k+x)!=mp.end()) count = count + mp[k+x];
            }

            mp[x]++;
        }

        return count;
    }
};
