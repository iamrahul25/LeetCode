class Solution {
public:

    //Approach 2: By editing compare() function in sort() in STL

    //Approach 1: By making pair<int, int> count, element and then apply sorting
    vector<int> sortByBits(vector<int>& arr) {
        int n = arr.size();
        vector<pair<int,int>> vec(n);

        for(int i=0; i<arr.size(); i++){
            int count = 0;
            int num = arr[i];
            for(int j=0; j<32; j++){
                if((num>>j)&1) count++;
            }

            vec[i] = {count, arr[i]};
        }

        sort(vec.begin(), vec.end());

        for(int i=0; i<n; i++){
            arr[i] = vec[i].second;
        }

        return arr;

    }
};
