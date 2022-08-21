class Solution {
public:
    
    bool check(int num){
        
        int n = num;
        int digit;
        
        while(n!=0){
            digit = n%10;
            n = n/10;
            
            if(digit==0) return false;
            
            if(num%digit==0) continue;
            
            else return false;
        }
        
        return true;
    }
    
    
    
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;
        
        for(int i=left; i<=right; i++){
            if(check(i)==true){
                ans.push_back(i);
            }
        }
        
        return ans;
    }
};
