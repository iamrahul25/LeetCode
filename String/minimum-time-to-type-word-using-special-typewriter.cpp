class Solution {
public:
    int minTimeToType(string word) {
        
        char last = 'a';
        
        int time = 0;
        
        for(int i=0; i<word.size(); i++){
            
            int a = abs(word[i] - last);
            int b = abs(26 - a);
                        
            int move = min(a,b);
            
            //Moving Time
            time = time + move;
            
            //Press key Time
            time++;
            
            last = word[i];
        }
        
        return time;
    }
};
