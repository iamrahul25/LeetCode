class Solution {
public:

    bool isVowel(char c){
        if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u') return true;
        return false;
    }

    int maxVowels(string s, int k) {
        int n = s.size();
        int count = 0;
        int maxx = 0;

        for(int i=0; i<k; i++){
            if(isVowel(s[i])) count++;
        }

        maxx = max(maxx, count);
        
        for(int i=k; i<n; i++){
            if(isVowel(s[i-k])) count--;
            if(isVowel(s[i])) count++;
            maxx = max(maxx, count);
        }

        return maxx;
    }
};
