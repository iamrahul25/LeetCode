class Solution {
public:
    int partitionString(string s) {
        vector<int> emptyhash(26, 0);
        vector<int> hash(26,0);

        int count = 1;

        for(int i=0; i<s.size(); i++){
            if(hash[s[i]-'a']==0) hash[s[i]-'a']++;
            else{
                count++;
                hash = emptyhash;
                hash[s[i]-'a']++;
            }
        }

        return count;
    }
};
