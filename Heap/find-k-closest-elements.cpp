class Solution {
public:
    
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        
        //Method 3: Using Two Pointer Approach   Time: O(n + k)   Space: O(k)
        
        
        //Method 2: Using MaxHeap. Time O(nlogk + nlogk)  Space O(k + k)
        priority_queue<pair<int,int>> maxHeap;
        
        int n = arr.size();
        
        for(int i=0; i<n; i++){
            
            maxHeap.push({abs(arr[i]-x), arr[i]});
            
            if(maxHeap.size()>k){
                maxHeap.pop();
            }
        }
        
        vector<int> ans(k);
        
        for(int i=0; i<k; i++){
            ans[i] = maxHeap.top().second;
            maxHeap.pop();
        }
        
        //Sorting 
        sort(ans.begin(), ans.end());
        
        return ans;
        
        
        
        
        //Method 1: Using pair<int,int> ans Sorting.  Time: O(nlogn + nlogk)  Space: O(n + k).
//         int n = arr.size();
//         vector<pair<int,int>> vec(n);
        
//         vector<int> ans(k);
        
//         for(int i=0; i<n; i++){
//             vec[i] = {abs(arr[i] - x), arr[i]};
//         }
        
//         //Sorting - 1st Time
//         sort(vec.begin(), vec.end());
        
//         for(int i=0; i<k; i++){
//             ans[i] = vec[i].second;
//         }
        
//         //Soring - 2nd Time
//         sort(ans.begin(), ans.end());
        
//         return ans;

    }
};
