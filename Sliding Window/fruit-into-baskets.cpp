
class Solution {
public:

    int totalFruit(vector<int>& arr) {

        int n = arr.size();
        int i = 0;
        int j = 0;
        int maxlen = 1;
    
        unordered_map<int, int>mp;
    
        while(j<n){
            mp[arr[j]]++;
            if(mp.size()<=2){
                maxlen = max(maxlen, j-i+1);
            }
            else if(mp.size()>2){
                while(mp.size()>2){
                    mp[arr[i]]--;
                    if(mp[arr[i]]==0) mp.erase(arr[i]);
                    i++;
                }
            }
            j++;
        }
    
        return maxlen;
    }
};
