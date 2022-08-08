class Solution {
public:
    int minimumSum(int num) {
        
        int arr[4];
        
        int n = num;
        for(int i=0; i<4; i++){
            arr[i] = n%10;
            n = n/10;
        }
        
        sort(arr,arr+4);
        
        int num1 = arr[0]*10 + arr[2];
        int num2 = arr[1]*10 + arr[3];
        
        return num1+num2;
    }
};
