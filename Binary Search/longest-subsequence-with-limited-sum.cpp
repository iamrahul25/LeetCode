class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        int n = nums.size();
        int m = queries.size();
        
        //Sorting
        sort(nums.begin(), nums.end());
        
        //Prefix Sum - Vector
        vector<int> vec(n);
        int sum = 0;
        
        for(int i=0; i<n; i++){
            sum = sum + nums[i];
            vec[i] = sum;
        }
        
        
        //Answer Vector
        vector<int> ans(m);
        
        int i = 0;
        for(auto x: queries){
            int index = lower_bound(vec.begin(), vec.end(), x) - vec.begin();
            
            if(binary_search(vec.begin(), vec.end(), x)){
                ans[i] = index+1;
            }
            else{
                ans[i] = index;
            }
            
            i++;
        }
        
        return ans;
        
    }
};
