class Solution {
public:
    string intToRoman(int num) {
        
        string ans = "";
        
        vector<int> vec = {3000,2000,1000,900,800,700,600,500,400,300,200,100,90,80,70,60,50,40,30,20,10,9,8,7,6,5,4,3,2,1};
        vector<string> str = {"MMM","MM","M","CM","DCCC","DCC","DC","D","CD","CCC","CC","C","XC","LXXX","LXX","LX","L","XL","XXX","XX","X","IX","VIII","VII","VI","V","IV","III","II","I"};
        
        for(int i=0; i<vec.size(); i++){
            if(num/vec[i]>=1){
                ans = ans + str[i];
                num = num - vec[i];
            }
        }
        
        return ans;
    }
};
