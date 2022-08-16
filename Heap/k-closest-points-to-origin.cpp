class Solution {
public:
    
    //Method2: Using Heap
    
    
    //Method1: Using Sorting
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        
        vector<pair<int,vector<int>>> vec;
        
        int n = points.size();
        
        for(int i=0; i<n; i++){
            int d = (points[i][0]*points[i][0]) + (points[i][1]*points[i][1]);
            
            vec.push_back({ d, points[i]});
        }
        
        sort(vec.begin(), vec.end());
        
        vector<vector<int>> ans;
        
        for(int i=0; i<k; i++){
            ans.push_back(vec[i].second);
        }
        
        return ans;
    }
};
