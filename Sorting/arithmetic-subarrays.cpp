class Solution {
public:
    
    //Sorting : Time: O(NlogN)
    int maxCoins(vector<int>& piles) {
        
        sort(piles.begin(), piles.end(), greater<int>());
        
        int n = piles.size();
        
        int sum = 0;
        for(int i=1; i<=(n-n/3); i=i+2){
            sum = sum + piles[i];
        }
        
        return sum;
    }
};
