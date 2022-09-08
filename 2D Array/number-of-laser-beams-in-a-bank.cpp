class Solution {
public:
    
    //Time: O(M*N)  Space: O(1)
    int numberOfBeams(vector<string>& bank){
        
        int row = bank.size();
        int col = bank[0].size();
        
        int sum = 0;
        int prevcount = 0;
        int count = 0;
        
        for(int i=0; i<row; i++){
            for(int j=0; j<col; j++){
                if(bank[i][j]=='1'){
                    count++;
                }
            }
            
            if(count!=0){
                sum = sum + (prevcount * count);
            
                prevcount = count;
                count = 0;
            }
            
        }
        
        return sum;
        
    }
};
