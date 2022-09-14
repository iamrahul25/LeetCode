class Solution {
public:
    
    //Approach 1: Binary Search 
    //Time Complexity: O(N * logN)  Space: O(1)
    long long find_sum(int x, vector<int> &v){
        
        long long sum = 0;
        
        for(int i=0; i<v.size(); i++){
            sum = sum + (v[i]/x);
            
            if(v[i]%x!=0) sum++;
        }
        return sum;
    }
    
    
    int minEatingSpeed(vector<int>& piles, int h){
        
        int maxx = *max_element(piles.begin(), piles.end());
        
        int low = 1;
        int high = maxx;
        int mid;
        
        int ans = maxx;
        
        while(low<=high){
            mid = (low+high)/2;
            
            if(find_sum(mid, piles)<=h){
                ans = mid;
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        
        return ans;
    }
};
