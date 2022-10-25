/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    //Method 1: Using Extra Space
    int pairSum(ListNode* head) {
        int n = 0;
        ListNode* temp = head;
        
        vector<int> v;
        
        while(temp!=NULL){
            n++;
            v.push_back(temp->val);
            temp = temp->next;
        }
        
        int maxx = INT_MIN;
        for(int i=0; i<n/2; i++){
            maxx = max(maxx, (v[i] + v[n-i-1]));
        }
        
        return maxx;
    }
    
    //Method 2: Without using Extra Space: 
//     int pairSum(ListNode* head){
//     }
};
