class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        
        int hash1[1010] = {0};
        int hash2[1010] = {0};

        int hash3[1010] = {0};

        for(int i=0; i<nums1.size(); i++){
            hash1[nums1[i]]++;
        }

        for(int i=0; i<nums2.size(); i++){
            hash2[nums2[i]]++;
        }

        for(int i=0; i<1010; i++){
            hash3[i] = min(hash1[i], hash2[i]);
        }

        vector<int> ans;


        for(int i=0; i<1010; i++){
            if(hash3[i]!=0){
                for(int j=0; j<hash3[i]; j++){
                    ans.push_back(i);
                }
            }
        }  

        return ans;
        
    }
};
