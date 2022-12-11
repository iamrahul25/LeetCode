class Solution {
public:

    //Correct only for positive numbers. 
    bool canArrange(vector<int>& arr, int k) {
        int n = arr.size();
        
        //Taking Modulo
        for(int i=0; i<n; i++){
            arr[i] = arr[i] % k;
        }
        
        unordered_multiset<int> st;
        
        for(int i=0; i<n; i++){
            int a,b;
            if(arr[i]<0){
                a = abs(arr[i]);
                b = -k + abs(arr[i]);
            }
            else if(arr[i]==0){
                a = 0;
                b = 0;
            }
            else{
                a = -arr[i];
                b = k - arr[i];
            }

            auto it1 = st.find(a);
            auto it2 = st.find(b);

            //Found 1
            if(it1!=st.end()){
                st.erase(it1);
            }
            //Found 2
            else if(it2!=st.end()){
                st.erase(it2);
            }

            else{
                st.insert(arr[i]);
            }
        }
        
        if(st.size()==0) return true;
        else return false;
    }
};
