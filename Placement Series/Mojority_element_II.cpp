class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        
        int count1 = 0;
        int count2 = 0;
        int num1 = -1;
        int num2 = -1;
        
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==num1){
                count1++; 
            } 
            else if(nums[i]==num2){
                count2++;
            } 
            else if(count1==0){
                num1 = nums[i];
                count1++;
            }
            else if(count2==0){
                num2 = nums[i];
                count2++;
            }
            else{
                count1--;
                count2--;
            }
        }
        
        int c1 = 0;
        int c2 = 0;
        
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==num1){
                c1++;
            }
            else if(nums[i]==num2){
                c2++;
            }
        }
        
        vector<int> ans;
        
        if(c1 > nums.size()/3){
            ans.push_back(num1);
        }
        if(c2 > nums.size()/3){
            ans.push_back(num2);
        }
        
        return ans;
    }
};
