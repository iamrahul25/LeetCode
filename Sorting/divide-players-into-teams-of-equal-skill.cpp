class Solution {
public:

    //Approach 2: Using Unordered Map Time: O(N) Space: O(N)

    //Approach 1: Using Sorting: Time: O(NlongN) Space: O(1)
    long long dividePlayers(vector<int>& skill) {
        int n = skill.size();
        sort(skill.begin(), skill.end());

        int sum = skill[0] + skill[n-1];
        long long total = 0;

        for(int i=0; i<(n/2); i++){
            if(sum!=skill[i]+skill[n-i-1]) return -1;
            total = total + ((long long)skill[i]*skill[n-i-1]);
        }

        return total;
    }
};
