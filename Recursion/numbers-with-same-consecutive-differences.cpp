class Solution {
public:
    
    void helper(int num, int n, int k, vector<int> &vec){
        
        if(n==1){
            vec.push_back(num);
            return;
        }
        
        
        int digit = num%10;
        
        if(digit+k <= 9){
            helper(num*10 + digit + k, n-1, k, vec);
        }
        
        if(digit-k >=0 and k!=0){
            helper(num*10 + digit-k, n-1, k, vec);
        }
    }
    
    
    vector<int> numsSameConsecDiff(int n, int k) {
        vector<int> ans;
        
        for(int i=1; i<=9; i++){
            helper(i, n, k, ans);
        }
        
        return ans;
    }
};
