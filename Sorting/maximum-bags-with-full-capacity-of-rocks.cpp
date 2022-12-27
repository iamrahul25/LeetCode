class Solution {
public:

    //Time: O(N)  Space: O(1) or O(N)
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) {
        int n = rocks.size();
        int sum = 0;
        for(int i=0; i<n; i++){
            capacity[i] = capacity[i] - rocks[i];
        }

        sort(capacity.begin(), capacity.end());

        int i = 0;
        while(i<n){
            if(additionalRocks >= capacity[i]){
                additionalRocks = additionalRocks - capacity[i];
                capacity[i] = 0;
            }
            else{
                break;
            }
            i++;
        }

        int ans = 0;
        for(auto x: capacity) if(x==0) ans++;

        return ans;
    }
};
