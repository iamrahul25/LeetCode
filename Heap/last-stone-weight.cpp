class Solution {
public:

    //Using Heap Data Structure => Time: O(NlogN) Space: O(N)
    int lastStoneWeight(vector<int>& stones) {
        int n = stones.size();

        priority_queue<int> pq;
        for(int i=0; i<n; i++){
            pq.push(stones[i]);
        }

        while(pq.size()>1){
            int max1 = pq.top(); pq.pop();
            int max2 = pq.top(); pq.pop();

            if(max1!=max2) pq.push(max1-max2);
        }

        if(pq.size()==0) return 0;
        else return pq.top();
    }

};
