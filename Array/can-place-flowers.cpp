class Solution {
public:
    bool canPlaceFlowers(vector<int> &arr, int n) {
        int l = arr.size();

        if(l==1){
            if(n==0) return true;
            else if(n==1 and arr[0]==0) return true;
            else return false;
        }

        int count = 0;
        for(int i=0; i<l; i++){
            if(i==0){
                if(arr[i]==0 and arr[i+1]==0){
                    arr[i] = 1;
                    count++;
                }
            }

            else if(i==l-1){
                if(arr[l-1]==0 and arr[l-2]==0){
                    arr[l-1] = 1;
                    count++;
                }
            }

            else{
                if(arr[i-1]==0 and arr[i]==0 and arr[i+1]==0){
                    arr[i] = 1;
                    count++;
                }
            }
        }

        if(count>=n) return true;
        return false;
    }
};
