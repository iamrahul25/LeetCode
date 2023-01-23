class Solution {
public:

    //Time: O(N) Space: O(N)
    int findJudge(int n, vector<vector<int>>& trust) {
        
        vector<int> arr1(n,0);
        vector<int> arr2(n,0);

        int m = trust.size();

        for(int i=0; i<m; i++){
            arr1[trust[i][0]-1]++;
            arr2[trust[i][1]-1]++;
        }

        for(int i=0; i<n; i++){
            if(arr1[i]==0 and arr2[i]==n-1) return (i+1);
        }

        return -1;
    }
};
