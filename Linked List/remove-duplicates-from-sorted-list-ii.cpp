class Solution {
public:

    //Time: O(N) Space: O(1)
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* temp = head;
        ListNode* last = NULL;

        while(temp!=NULL and temp->next!=NULL){
            int val = temp->val;
            if(temp->val == temp->next->val){
                while(temp!=NULL and val==temp->val){
                    temp = temp->next;
                }
                if(last==NULL) head = temp;
                else last->next = temp;
            }
            else{
                last = temp;
                temp = temp->next;
            }
        }

        return head;
    }
};
