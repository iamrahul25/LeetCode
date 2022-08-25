class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        
        int n = nums.size();
        
        vector<int> ans(n);
        
        int less = 0;
        int equal = 0;
        int greater = 0;
        
        for(int i=0; i<n; i++){
            if(nums[i]<pivot) less++;
            else if(nums[i]>pivot) greater++;
            else equal++;
        }
        
        int p1 = 0;
        int p2 = less;
        int p3 = less+equal;
        
        for(int i=0; i<n; i++){
            if(nums[i]<pivot){
                ans[p1] = nums[i];
                p1++;
            }
            
            else if(nums[i]==pivot){
                ans[p2] = nums[i];
                p2++;
            }
            
            else{
                ans[p3] = nums[i];
                p3++;
            }
        }
        
        return ans;
        
        
    }
};
