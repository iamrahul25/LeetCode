class Solution {
public:

    //Time: O(M+N) Space: O(1)
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* temp1 = l1;
        ListNode* temp2 = l2;

        ListNode* last1 = l1;
        ListNode* last2 = l2;

        ListNode* head;
        ListNode* last;

        int rem = 0;
        while(temp1!=NULL and temp2!=NULL){
            int sum = temp1->val + temp2->val + rem;
            if(sum>=10) rem = 1;
            else rem = 0;

            temp1->val = sum%10;
            temp2->val = sum%10;

            last1 = temp1;
            last2 = temp2;

            temp1 = temp1->next;
            temp2 = temp2->next;
        }

        if(temp1==NULL){
            head = l2;
            last = last2;
        }
        else{
            head = l1;
            last = last1;
        }

        while(temp1!=NULL){
            int sum = temp1->val + rem;
            if(sum>=10) rem = 1;
            else rem = 0;

            temp1->val = sum%10;
            last = temp1;
            temp1 = temp1->next;
        }

        while(temp2!=NULL){
            int sum = temp2->val + rem;
            if(sum>=10) rem = 1;
            else rem = 0;

            temp2->val = sum%10;
            last = temp2;
            temp2 = temp2->next;
        }

        if(rem!=0) last->next = new ListNode(rem);

        return head;
    }
};
