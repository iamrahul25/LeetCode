class Solution {
public:
    
    //Short Answer: Time: O(N)  Space: O(1)
    bool canThreePartsEqualSum(vector<int>& arr) {
        int sum = 0;

        for(auto x: arr){
            sum+=x;
        }
        
        //If sum is not divisible by 3
        if(sum%3!=0){
            return false;
        }
        
        int part = 0;
        int cursum = 0;
        
        for(int i=0; i<arr.size(); i++){
            cursum = cursum + arr[i];
            
            if(cursum  == sum/3){
                part++;
                cursum = 0;
            }
        }
        
        if(part>=3){
            return true;
        }
        else{
            return false;
        }
    }
    
    
    
    
    //Time: O(N)  Space: O(1) --> Little Bit Lengthy Answer.
//     bool canThreePartsEqualSum(vector<int>& arr) {
        
//         int n = arr.size();
//         int sum = 0;
        
//         //Finding Sum
//         for(auto x: arr){
//             sum+=x;
//         }
        
//         int cursum = 0;
//         int index = 0;
//         int count = 0;
        
//         while(index<n){
//             cursum = cursum + arr[index];
            
//             if( 2 * cursum == sum - cursum){
//                 count++;
//                 index++;
//                 break;
//             }
            
//             index++;
//         }
        
//         sum = sum - cursum;
//         cursum = 0;
        
//         while(index<n-1){
//             cursum = cursum + arr[index];
//             if(cursum == sum - cursum){
//                 count++;
//                 break;
//             }
            
//             index++;
//         }
        
        
//         if(count == 2){
//             return 1;
//         }
//         else{
//             return 0;
//         }
        
//     }
    
};
