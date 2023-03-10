class Solution {
public:

    static bool mycompare(vector<int>&a, vector<int>&b){
        return abs(a[0] - a[1]) > abs(b[0] - b[1]);
    }

    int twoCitySchedCost(vector<vector<int>>& costs) {
        sort(costs.begin(), costs.end(), mycompare);
        int n = costs.size()/2;
        int sum = 0;
        int a = 0;
        int b = 0;

        for(int i=0; i<costs.size(); i++){
            // cout<<costs[i][0]<<" : "<<costs[i][1]<<" : "<<abs(costs[i][0]-costs[i][1])<<endl;
            if(costs[i][0]<costs[i][1]){
                if(a<n){ sum = sum + costs[i][0]; a++;}
                else{sum = sum + costs[i][1]; b++;}
            }
            else{
                if(b<n){sum = sum + costs[i][1]; b++;}
                else{sum = sum + costs[i][0]; a++;}
            }
        }
        return sum;
    }
};
