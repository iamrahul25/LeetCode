class Solution {
public:
    //Time: O(N+M)  Space: O(N+M)
    int countWords(vector<string>& words1, vector<string>& words2) {
        unordered_map<string, int> mpp1;
        unordered_map<string, int> mpp2;
        
        for(auto s: words1){
            mpp1[s]++;
        }
        
        for(auto s: words2){
            mpp2[s]++;
        }
        
        int count = 0;
        for(auto x: words1){
            if(mpp1[x]==1 and mpp2[x]==1){
                count++;
            }
        }
        
        return count;
    }
};
