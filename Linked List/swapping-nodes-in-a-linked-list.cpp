class Solution {
public:
    
    //Approach 1: Using 3 Loops
    ListNode* swapNodes(ListNode* head, int k) {
        
        int length = 0;
        ListNode* temp = head;
        while(temp!=NULL){
            length++;
            temp = temp->next;
        }
        
        int start = k-1;
        int end = length-k;
        
        ListNode* p1 = head;
        while(start--){
            p1 = p1->next;
        }
        
        ListNode* p2 = head;
        while(end--){
            p2 = p2->next;
        }
        
        swap(p1->val, p2->val);

        return head;
    }
};
