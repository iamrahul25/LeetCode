class Solution {
public:
    
    //Approach 3: Using Map   Time: O(N)  Space: O(N)
    
    
    
    //Approach 2: Using Binary Search  Time: O(NlogN) Space: O(1)
    
    
    
    //Approach 1: Using Two Pointer  Time: O(N)  Space: O(1)  
    vector<int> twoSum(vector<int>& numbers, int target){
        
        int n = numbers.size();
        
        int i = 0;
        int j = n-1;
        
        while(i<=j){
            if(numbers[i]+numbers[j]>target){
                j--;
            }
            else if(numbers[i]+numbers[j]<target){
                i++;
            }
            else{
                return {i+1,j+1};
            }
        }
        
        return {-1,-1};
    }
    
    
    
};
