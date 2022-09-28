class Solution {
public:
    
    //Approach 2: Using One Loop
    ListNode* deleteMiddle(ListNode* head){
        
        if(head->next==NULL) return NULL;
        ListNode *slow = head, *fast = head->next->next;
        
        while(fast and fast->next){
            slow = slow -> next;
            fast = fast->next->next;
        }
        
        ListNode* remove = slow->next;
        slow->next = slow->next->next;
        delete remove;
        
        return head;
    }
    
    
    //Approach 1: Using Two Loops
//     ListNode* deleteMiddle(ListNode* head) {
//         int n = 0;
//         ListNode* temp = head;
        
//         while(temp!=NULL){
//             n++;
//             temp = temp->next;
//         }
        
//         if(n==1) return NULL;
        
//         n = (n/2)-1;
//         temp = head;
        
//         while(n--){
//             temp = temp->next;
//         }
        
//         ListNode* remove = temp->next;
//         temp->next = temp->next->next;
//         delete remove;
        
//         return head;
//     }
};
