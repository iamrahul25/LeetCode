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
    //Using Extra Space   Time: O(N)  Space: O(N)
    void reorderList(ListNode* head) {
        
        ListNode* temp = head;
        vector<int> v;
        
        while(temp!=NULL){
            v.push_back(temp->val);
            temp = temp->next;
        }
        
        int n = v.size();
        int h = n/2;
        
        int i;
        temp = head;
        for(i=0; i<h; i++){
            temp->val = v[i];
            temp = temp->next;
            temp->val = v[n-i-1];
            temp = temp->next;
        }
        
        if(n%2==1){
            temp->val = v[i];
        }
    }
};
