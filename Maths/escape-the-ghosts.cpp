class Solution {
public:
    bool escapeGhosts(vector<vector<int>>& ghosts, vector<int>& target) {
        
        int distance = abs(target[0]) + abs(target[1]);
        
        int mind = INT_MAX;
        for(auto x: ghosts){
            int d = abs(x[0] - target[0]) + abs(x[1] - target[1]);
            mind = min(mind, d);
        }
        
        if(distance<mind) return true;
        
        return false;
    }
};
