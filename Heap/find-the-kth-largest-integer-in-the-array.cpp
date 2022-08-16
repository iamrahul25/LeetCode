class Solution {
public:
    static bool func(string &s1, string &s2){
        if(s1.size()==s2.size()){
            return (s1>s2);
        }
        else{
            return (s1.size()>s2.size());
        }
    }
    
    
    string kthLargestNumber(vector<string>& nums, int k) {
        
        sort(nums.begin(), nums.end(), func);
        
        for(auto e: nums){
            cout<<e<<" ";
        }cout<<endl;
        
        return nums[k-1];
    }
};
