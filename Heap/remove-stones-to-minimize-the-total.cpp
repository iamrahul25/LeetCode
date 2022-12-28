class Solution {
public:

    //Heap Question - Time: O(n*logn) Space: O(N)
    int minStoneSum(vector<int>& piles, int k){

        priority_queue<int> heap;
        int n = piles.size();

        for(auto x: piles) heap.push(x);

        while(k){
            int top = heap.top();
            heap.pop();
            float f = ceil((top*1.0)/2);
            heap.push(f);
            k--;
        }

        int sum = 0;
        while(!heap.empty()){
            sum = sum + heap.top();
            heap.pop();
        }

        return sum;
    }
};
