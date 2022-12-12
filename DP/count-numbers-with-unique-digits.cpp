class Solution {
public:
    //Mathematical Problem --> Require Knowledge of Permutation and Combination
    //DP Problem 
    int countNumbersWithUniqueDigits(int n) {
        vector<int> v(9);
        v[0] = 1;
        v[1] = 9;
        v[2] = v[1]*9;
        v[3] = v[2]*8;
        v[4] = v[3]*7;
        v[5] = v[4]*6;
        v[6] = v[5]*5;
        v[7] = v[6]*4;
        v[8] = v[7]*3;

        int sum = 0;
        for(int i=0; i<n+1; i++){
            sum = sum + v[i];
        }

        return sum;
    }
};
