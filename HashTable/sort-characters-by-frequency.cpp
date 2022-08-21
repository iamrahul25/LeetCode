class Solution {
public:
    string frequencySort(string s) {
        
        unordered_map<char,int> mpp;
        
        for(int i=0; i<s.size(); i++){
            mpp[s[i]]++;
        }
        
        vector<pair<int,char>> vec;
        
        for(auto x: mpp){
            vec.push_back({x.second, x.first});
        }
        
        sort(vec.begin(), vec.end(), greater<pair<int,char>>());
        
        string ans = "";
        
        for(auto x: vec){
            string strr(x.first, x.second);
            ans = ans + strr;
        }
        
        return ans;
    }
};
