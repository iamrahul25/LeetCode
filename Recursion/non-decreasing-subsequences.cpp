class Solution {
public:
    //Recursive Problem: Time: O(2^N)

    //Set to store Unique Subsequences
    set<vector<int>> st;

    void recursion(int i, vector<int>&nums, vector<int>&subseq){
        if(i==nums.size()){
            if(subseq.size()>=2) st.insert(subseq);
            return;
        }

        int last = INT_MIN;
        if(subseq.size()!=0) last = subseq[subseq.size()-1];

        if(nums[i]>=last){
            //Pick
            subseq.push_back(nums[i]);
            recursion(i+1, nums, subseq);

            //Not Pick
            subseq.pop_back();
            recursion(i+1, nums, subseq);
        }
        else{
            recursion(i+1, nums, subseq);
        }
    }

    vector<vector<int>> findSubsequences(vector<int>& nums){
        vector<int> subseq;
        recursion(0,nums,subseq);

        vector<vector<int>> ans(st.begin(), st.end());
        return ans;
    }
};
