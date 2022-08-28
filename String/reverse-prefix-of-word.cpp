class Solution {
public:
    string reversePrefix(string word, char ch) {
        
        int index = 0;
        
        //Finding Index
        for(int i=0; i<word.size(); i++){
            if(word[i]==ch){
                index = i;
                break;
            }
        }
        
        //Reversing the String upto Index.
        for(int i=0; i<=index/2; i++){
            swap(word[i], word[index-i]);
        }
        
        return word;
    }
};
