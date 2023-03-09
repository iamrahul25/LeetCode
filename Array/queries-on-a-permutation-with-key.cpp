class Solution {
public:
    vector<int> processQueries(vector<int>& queries, int m) {

        int q = queries.size();
        vector<int> ans;
        vector<int> arr(m, 0);

        for(int i=0; i<m; i++) arr[i] = i+1;

        int i, j;

        for(i=0; i<q; i++){
            for(j=0; j<m; j++){
                if(queries[i]==arr[j]){
                    ans.push_back(j);
                    break;
                }
            }

            for(int k=j; k>=1; k--){
                arr[k] = arr[k-1];
            }
            arr[0] = queries[i];
        }

        return ans;
    }
};
