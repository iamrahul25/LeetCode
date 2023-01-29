class Solution {
public:

    //Greedy Problem: Time: O(NlogN) Space: O(1)
    static bool compare(vector<int>&a, vector<int>&b){
        if(a[1]>=b[1]) return false;
        else return true;
    }

    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        
        sort(intervals.begin(), intervals.end(), compare);
        
        int n = intervals.size();
        int end = intervals[0][1];
        int count = 0;

        for(int i=1; i<n; i++){
            if(intervals[i][0]<end){
                count++;
            }
            else{
                end = intervals[i][1];
            }
        }

        return count;
    }
};
