class Solution {
public:

    //Appraoch 2: We can edit compare function in sort() method

    //Approach 1: By Changing the alien language to normal language and sorting
    bool isAlienSorted(vector<string>& words, string order) {
        
        int hash[26];
        for(int i=0; i<26; i++){
            hash[order[i]-'a'] = i;
        }

        int n = words.size();
        for(int i=0; i<n; i++){
            for(int j=0; j<words[i].size(); j++){
                words[i][j] = hash[words[i][j] - 'a'] + 'a';
            }
        }

        vector<string> sorted = words;
        sort(sorted.begin(), sorted.end());

        for(int i=0; i<n; i++){
            if(sorted[i]!=words[i]) return false;
        }

        return true;
    }
};
