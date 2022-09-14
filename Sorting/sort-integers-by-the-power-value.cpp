class Solution {
public:
    
    //Brute Force: --> Without Memoization 
    //We can use memoization to optimise it. 
    int getKth(int lo, int hi, int k) {
        
        vector<pair<int,int>> v;
        
        for(int i=lo; i<=hi; i++){
            
            int count = 0;
            int n = i;
            
            while(n!=1){
                if(n%2==0) n = n/2;
                else n = (n*3) + 1;
                count++;
            }
            
            v.push_back({count,i});
        }
        
        sort(v.begin(),v.end());
        
        // for(auto x: v){
        //     cout<<x.first<<" : "<<x.second<<endl;
        // }
        
        return v[k-1].second;
        
    }
};
