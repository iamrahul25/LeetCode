class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers){

        sort(players.begin(), players.end());
        sort(trainers.begin(), trainers.end());

        int i = 0;
        int j = 0;
        int n = players.size();
        int m = trainers.size();

        int count = 0;
        while(i<n and j<m){
            if(players[i]<=trainers[j]){
                i++; j++; count++;
            }
            else if(players[i]>trainers[j]){
                j++;
            }
        }

        return count;
    }
};
