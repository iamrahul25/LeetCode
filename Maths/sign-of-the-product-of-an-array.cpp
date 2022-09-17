class Solution {
public:
    
    //Time: O(N)
    int arraySign(vector<int>& nums) {
        
        int z = 0;
        int n = 0;
        
        for(auto x: nums){
            if(x==0){
                z++;
                break;
            }
            else if(x<0) n++;
        }
        
        if(z>=1) return 0;
        else if(n%2==0) return 1;
        else return -1;
    }
};
