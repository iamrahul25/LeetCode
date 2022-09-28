class Solution {
public:
    //Time Complexity: O(N)
    int wateringPlants(vector<int>& plants, int capacity) {
        int n = plants.size();
        int steps = 0;
        int water = capacity;
        
        for(int i=0; i<n; i++){
            if(plants[i]<=water){
                water = water - plants[i];
                steps++;
            }
            else{
                steps = steps + (2*i)+1;
                water = capacity - plants[i];
            }
        }
        
        return steps;
    }
};
