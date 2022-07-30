class Solution {
public:
    
int removeElement(vector<int>& nums, int val) {

    int n = nums.size();
    int p1 = 0;
    int p2 = n - 1;

    int count = 0;

    while((p1-1)!=p2){

        if(nums[p1]==val){

            count++;

            if(nums[p1]!=nums[p2]){
                int temp = nums[p1];
                nums[p1] = nums[p2];
                nums[p2] = temp;
                p1++;
                p2--;
            }

            else{
                p2--;
            }
        }

        else{
            p1++;;
        }

    }

    // printvec(nums);

    return (n - count);

    }
};
