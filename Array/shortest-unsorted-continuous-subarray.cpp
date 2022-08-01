class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int n = nums.size();

        vector <int> sorted = nums;
        sort(sorted.begin(), sorted.end());

        int a = -1;
        int b = -1;

        for(int i=0; i<n; i++){
            if(nums[i]!=sorted[i]){
                a = i;
                break;
            }
        }

        for(int i=n-1; i>=0; i--){
            if(nums[i]!=sorted[i]){
                b = i;
                break;
            }
        }

        cout<<"a: "<<a<<" b: "<<b<<endl;

        if(a==-1 and b==-1){
            return 0;
        }
        else{
            return (b-a+1);
        }
    }
};
