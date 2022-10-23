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
    
    //Method 1: Using Swapping Adjacent Values / Without Changing Links.
//     ListNode* swapPairs(ListNode* head){
//         if(head==NULL) return head;
//         else if(head->next == NULL) return head;
        
//         ListNode* temp = head;
//         while(temp!=NULL){
//             if(temp->next!=NULL){
//                 swap(temp->val, temp->next->val);
//                 temp = temp->next->next;
//             }
//             else{
//                 temp = temp->next;
//             }
//         }
        
//         return head;
//     }
    
    
    //Method 2: Using Changing Link Using Recursion. 
    ListNode* swapPairs(ListNode* head){
        if(head==NULL) return head;
        else if(head->next == NULL) return head;
        
        ListNode* temp1 = head;
        ListNode* temp2 = head->next;
        
        temp1->next = swapPairs(temp2->next);
        temp2->next = temp1;
        return temp2;
        
    }
    
};
