class Solution {
public:
    int triangularSum(vector<int>& arr) {
        int n = arr.size();

        for(int i=n; i>=1; i--){
            for(int j=0; j<i-1; j++){
                arr[j] = (arr[j] + arr[j+1])%10;
            }
        }
        
        return arr[0];
    }
};
