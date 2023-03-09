class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* slow = head;
        ListNode* fast = head;
        bool flag = false;

        while(fast!=NULL and fast->next!=NULL){
            slow = slow->next;
            fast = fast->next->next;

            if(fast==slow){
                flag = true;
                break;
            }
        }

        if(flag==false) return NULL;
        ListNode* temp = head;
        while(temp!=slow){
            temp = temp->next;
            slow = slow->next;
        }
        return temp;
    }
};
