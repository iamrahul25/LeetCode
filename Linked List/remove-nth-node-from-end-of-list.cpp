class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        int length = 0;
        ListNode* temp = head;
        
        while(temp!=NULL){
            length++;
            temp = temp->next;
        }
        
        //Case 1: First Element
        if(n==length){
            ListNode* remove = head;
            head = head->next;
            delete remove;
            return head;
        }
        
        int nth = length - n - 1;
        temp = head;
        while(nth--){
            temp = temp->next;
        }
        
        ListNode* remove = temp->next;
        temp->next = temp->next->next;
        delete remove;
        
        return head;
    }
};
