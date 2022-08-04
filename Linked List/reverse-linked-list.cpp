class Solution {
public:
    ListNode* reverseList(ListNode* head) {


        if(head==NULL){
            return head;
        }

        else if(head->next==NULL){
            return head;
        }


        ListNode* prev = NULL;
        ListNode* curr = head;

        ListNode* temp;

        while(curr->next!=NULL){

            temp = curr->next;

            curr->next = prev;
            prev = curr;
            curr = temp;

        }

        curr->next = prev;
        head = curr;


        return head;        
    }
};
