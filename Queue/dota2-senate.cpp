class Solution {
public:
    string predictPartyVictory(string senate) {
        queue<int> qR;
        queue<int> qD;
        int n = senate.size();

        for(int i=0; i<n; i++){
            if(senate[i]=='R') qR.push(i);
            else qD.push(i);
        }

        for(int i=0; i<n; i++){
            if(qR.size()==0 || qD.size()==0) break;
            
            if(qR.front()<qD.front()){
                qR.push(qR.front()+n);
                qR.pop();
                qD.pop();
            }
            else{
                qD.push(qD.front()+n);
                qD.pop();
                qR.pop();
            }
        }

        if(qR.size()==0) return "Dire";
        return "Radiant";
    }
};
