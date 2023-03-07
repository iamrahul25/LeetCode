class Solution {
public:
    vector<int> pancakeSort(vector<int>& arr) {
        vector<int> ans;
        int n = arr.size();

        for(int i=1; i<=n; i++){

            for(int j=0; j<n; j++){
                if(arr[j]==i){
                    int a = j+1;
                    int b = n-i+1;
                    ans.push_back(a);
                    ans.push_back(b);
                    reverse(arr.begin(), arr.begin()+a);
                    reverse(arr.begin(), arr.begin()+b);
                    break;
                }
            }
        }

        ans.push_back(n);
        return ans;
    }
};
