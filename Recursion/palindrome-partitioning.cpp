class Solution {
public:

    //Similar to MCM Problem: Time: O(2^N) Space: O(1)
    vector<vector<string>> ans;

    bool isPalindrome(string s, int i, int j){
        while(i<j){
            if(s[i]!=s[j]) return false;
            i++;
            j--;
        }

        return true;
    }

    void mcm(string s, int i, int j, vector<string>&arr){
        if(i>=j){
            ans.push_back(arr);
            return;
        }

        for(int k=i; k<=j; k++){
            if(isPalindrome(s,i,k)){
                arr.push_back(s.substr(i,k-i+1));
                mcm(s,k+1,j,arr);
                arr.pop_back();
            }
        }
    }


    vector<vector<string>> partition(string s) {
        int n = s.size();
        vector<string> arr;
        mcm(s,0,n,arr);

        return ans;
    }
};
