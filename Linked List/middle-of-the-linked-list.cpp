class Solution {
public:
    //Approach 2: Using one Loop. Fast and Slow pointer. Time: O(N)  Space: O(1)
    ListNode* middleNode(ListNode* head){
        ListNode *slow = head, *fast = head;
        
        while(fast and fast->next){
            slow = slow -> next;
            fast = fast->next->next;
        }
        
        return slow;
    }

    //Approach 1: Using Two Loop.
//     ListNode* middleNode(ListNode* head){
//         int n = 0;
//         ListNode* temp = head;
        
//         while(temp!=NULL){
//             n++;
//             temp = temp->next;
//         }
        
//         n = (n/2);
//         temp = head;
//         while(n--){
//             temp = temp->next;
//         }
        
//         return temp;
//     }
    
};
