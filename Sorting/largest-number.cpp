class Solution {
public:
    static bool func(string &s1, string &s2){
        return s1+s2 > s2+s1;
    }
    
    string largestNumber(vector<int>& nums) {
        int n = nums.size();
        vector<string> vec(n);
        
        for(int i=0; i<n; i++){
            vec[i] = to_string(nums[i]);
        }
        
        sort(vec.begin(), vec.end(), func);
        
        string ans = "";
        for(auto x: vec){
            cout<<x<<" ";
            ans = ans + x;
        }
        
        //Removing Trailing Zeros
        int i=0;
        while(ans[i]=='0' and ans.size()>1){
            ans.erase(0,1);
        }
        
        return ans;
    }
};
