class SmallestInfiniteSet {
public:

    unordered_set<int> st;
    SmallestInfiniteSet() {}

    int popSmallest() {
        for(int i=1; i<=st.size()+1; i++){
            if(st.find(i)==st.end()){
                st.insert(i);
                return i;
            }
        }
        return NULL;
    }
    
    void addBack(int num) {
        if(st.find(num)!=st.end()) st.erase(num);
    }
};
