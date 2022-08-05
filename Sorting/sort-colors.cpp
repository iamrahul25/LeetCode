class Solution {
public:
    void sortColors(vector<int>& nums) {
        
        vector<int> hash = {0,0,0};
        
        for(int i=0; i<nums.size(); i++){
            hash[nums[i]]++;
        }
        
        
        int index = 0;
        
        while(hash[0]!=0){
            nums[index] = 0;
            hash[0]--;
            index++;
        }
        
        while(hash[1]!=0){
            nums[index] = 1;
            hash[1]--;
            index++;
        }
        
        while(hash[2]!=0){
            nums[index] = 2;
            hash[2]--;
            index++;
        }
        
    }
};
