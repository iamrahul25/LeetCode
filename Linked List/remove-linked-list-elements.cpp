class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        if(head==NULL){
            return head;
        }

        ListNode* temp = head;
        ListNode* prev = head;

        while(temp!=NULL){

            if(temp->val == val){

                // First Element
                if(temp==head){
                    head = temp->next;
                    delete temp;
                    temp = head;
                }

                //Last Element
                else if(temp->next==NULL){
                    prev->next = NULL;
                    delete temp;
                    temp = prev;
                }

                //Middle Element
                else{
                    prev->next = temp->next;
                    delete temp;
                    temp = prev->next;
                }
            }

            else{
                prev = temp;
                temp = temp->next;
            }
        }

        return head;
    }
};
