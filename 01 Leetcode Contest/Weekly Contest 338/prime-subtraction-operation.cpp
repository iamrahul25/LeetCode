class Solution {
public:
    //Function to check Prime Number in O(sqrt(n))
    bool isPrime(int n){
        if(n==1) return false;
        for(int i=2; i*i<=n; i++){
            if(n%i==0) return false;
        }
        return true;
    }

    //Function to find Prime number between range x,y. If not found return -1
    int findPrime(int x, int y){
        for(int i=x; i<=y; i++){
            if(isPrime(i)) return i;
        }
        return -1;
    }

    bool primeSubOperation(vector<int>& nums) {
        int n = nums.size();
        if(n==1) return true;

        for(int i=n-2; i>=0; i--){
            if(nums[i]<nums[i+1]) continue;

            else{
                int x = nums[i] - nums[i+1] + 1;
                int y = nums[i] - 1;
                
                int fp = findPrime(x,y);
                
                if(fp==-1) return false;
                else nums[i] = nums[i] - fp;
            }
        }

        return true;
    }
};
