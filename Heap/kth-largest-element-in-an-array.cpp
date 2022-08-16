class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        
        //Approach 2: Using MinHeap. Time N(logk) Space: O(k)
        priority_queue <int, vector<int>, greater<int>> maxHeap;
        
        for(int i=0; i<nums.size(); i++){
            
            maxHeap.push(nums[i]);
            
            if(maxHeap.size()>k){
                maxHeap.pop();
            }
        }
        return maxHeap.top();
        
    
        //Approach 1: Using Sorting.  Time: N(logN) Space: O(1)
        
        // sort(nums.begin(), nums.end(), greater<int>());
        // return nums[k-1];
    }
};
