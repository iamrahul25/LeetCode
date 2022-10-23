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
    ListNode* rotateRight(ListNode* head, int k){
        
        if(head==NULL) return head;
        if(head->next==NULL) return head;
        
        
        int n = 0;
        
        ListNode* temp = head;
        while(temp!=NULL){
            n++;
            temp = temp->next;
        }
        
        k = k%n;
        if(k==0) return head;
        
        temp = head;
        ListNode* temp2 = head;
        int l = n - k - 1;
        
        while(l--){
            temp = temp->next;
        }
        
        head = temp->next;
        temp->next = NULL;
        
        temp = head;
        
        while(temp->next!=NULL){
            temp = temp->next;
        }
        
        temp->next = temp2;
        return head;

    }
};
