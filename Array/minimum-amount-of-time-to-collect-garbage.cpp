class Solution {
public:
    bool check(string s, char c){
        for(auto x: s){
            if(x==c) return true;
        }
        return false;
    }
    
    
    int garbageCollection(vector<string>& garbage, vector<int>& travel){
        
        int n = garbage.size();
        
        //G - Glass Index, P - Paper Index, M - Metal Index
        int g = 0;
        int p = 0;
        int m = 0;
        
        for(int i=n-1; i>=0; i--){
            if(check(garbage[i],'G')){
                g = i;
                break;
            }
        }
        
        for(int i=n-1; i>=0; i--){
            if(check(garbage[i],'P')){
                p = i;
                break;
            }
        }
        
        for(int i=n-1; i>=0; i--){
            if(check(garbage[i],'M')){
                m = i;
                break;
            }
        }

        // cout<<g<<" : "<<p<<" : "<<m<<endl;
        
        int count = 0;
        
        for(int i=0; i<n; i++){
            for(auto x: garbage[i]){
                count++;
            }
        }
        
        vector<int> presum(n,0);
        presum[0] = 0;
        
        int sum = 0;
        for(int i=1; i<n; i++){
            sum = sum + travel[i-1];
            presum[i] = sum;
        }
        
        int ans = presum[g] + presum[p] + presum[m] + count;
    
        return ans;
        
    }
};
