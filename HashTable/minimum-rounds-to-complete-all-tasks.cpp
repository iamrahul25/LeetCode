class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        unordered_map<int,int> mp;

        for(auto x: tasks){
            mp[x]++;
        }

        int count = 0;

        for(auto x: mp){
            if(x.second==1) return -1;
            count = count + (ceil(x.second/3.0));
        }

        return count;
    }
};
