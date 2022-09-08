class Solution {
public:
    vector<int> distributeCandies(int candies, int num_people) {
        
        vector<int> vec(num_people, 0);
        
        int i = 0;
        int n = num_people;
        
        int a = 1;
        while(candies){
            vec[i%n] = vec[i%n] + min(a, candies);
            candies = max(0,candies - a);
            i++;
            a++;
        }
        
        return vec;
    }
};
