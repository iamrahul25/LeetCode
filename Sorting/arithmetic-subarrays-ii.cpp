class Solution {
public:

    //Approach 1: Time O(N * NlogN) Space: O(N)
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        
        int n = nums.size();
        int m = l.size();
        
        vector<bool> ans(m);
        
        for(int i=0; i<m; i++){
            
            int a = l[i];
            int b = r[i]+1;
            
            vector<int> v(nums.begin()+a, nums.begin()+b);
            
            sort(v.begin(), v.end());
            
            // for(auto x: v){
            //     cout<<x<<" ";
            // }cout<<endl;
            
            if(v.size()==1){
                ans[i] = true;
            }
            
            else{
                bool flag = true;
                int d = v[1] - v[0];
                
                for(int j=1; j<v.size(); j++){
                    
                    if((v[j]-v[j-1])!=d){
                        flag = false;
                        break;
                    }
                }
                
                ans[i] = flag;
            }
        }
        
        return ans;
    }
};
