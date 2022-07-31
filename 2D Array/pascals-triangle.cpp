class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        ans.push_back({{1}});

        if(numRows==1){
            return ans;
        }

        for(int n=2; n<=numRows; n++){
            vector <int> vec(n,0);

            vec[0] = 1;
            vec[n-1] = 1; 

            for(int j=1; j<(n-1); j++){
                vec[j] = ans[n-2][j] + ans[n-2][j-1];
            }

            ans.push_back(vec);

        }
        
        return ans;
    }
};
