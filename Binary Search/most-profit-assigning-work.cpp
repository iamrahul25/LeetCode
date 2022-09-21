class Solution {
public:
    
    //Function for Binary Search in Vector of Pair. 
    struct comp{ 
        int operator()(const pair<int,int>&mypair,const int& n){ 
            if(mypair.first < n)
              return 1;
            return 0;
        } 
        
        int operator()(const int& n,const pair<int,int>& mypair){ 
            if(n < mypair.first)
              return 1;
            return 0;
        } 
    }; 
    
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {
        
        int m = profit.size();
        int n = worker.size();
        
        vector<pair<int,int>> vec(m);
        
        for(int i=0; i<m; i++){
            vec[i] = {difficulty[i], profit[i]};
        }
        
        sort(vec.begin(), vec.end());
        
        int maxx = vec[0].second;
        
        //Maxizing Profit
        for(int i=0; i<m; i++){
            maxx = max(maxx, vec[i].second);
            vec[i].second = maxx;
        }
        
        int sum = 0;
        
        for(int i=0; i<n; i++){
            int index = -1;
            
            index = upper_bound(vec.begin(), vec.end(), worker[i], comp()) - vec.begin() - 1;
            
            if(index>=0){
                sum = sum + vec[index].second;
            }
        }
    
        
        return sum;
        
    }
};
