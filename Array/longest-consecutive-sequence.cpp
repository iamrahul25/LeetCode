class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        if(nums.size()==0){
            return 0;
        }
        
        unordered_set<int> s;

        //Inserting Elements
        for(int i=0; i<nums.size(); i++){
            s.insert(nums[i]);
        }


        int count = 1;
        int largest = 1;

        //Traversing
        for(auto e: s){

            //Checking if n-1 element is not present
            if(s.find(e-1)==s.end()){

                count = 1;

                int no = e+1;
                while(s.find(no)!=s.end()){
                    count++;
                    no++;
                }

                largest = max(largest, count);
            }
        }



        return largest;
    }
};
