class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size(); 
        
        //Empty 
        if(n==0){
            return 0;
        }

        vector<int> left_arr(n,0);
        vector<int> right_arr(n,0);

        int largest = height[0];
        for(int i=0; i<n; i++){
            largest = max(largest, height[i]);
            left_arr[i] = largest;
        }

        largest = height[n-1];
        for(int i=n-1; i>=0; i--){
            largest = max(largest, height[i]);
            right_arr[i] = largest;
        }
        

        int water = 0;
        for(int i=0; i<n; i++){
            water = water + (min(left_arr[i], right_arr[i]) - height[i]);
        }


        return water;
        }
};
