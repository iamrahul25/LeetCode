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
    
    //Method 1: Without using Extra space. 
    ListNode* oddEvenList(ListNode* head){
        
        if(head == NULL) return head;
        if(head->next == NULL) return head;
        
        int n = 1;
        
        ListNode* odd = head;
        ListNode* even = head->next;
        ListNode* evenlink = head->next;
    
        ListNode* temp = head;
        
        while(temp!=NULL){
            
            //Odd
            if(n%2==1){
                odd->next = even->next;
                if(odd->next!=NULL) odd = even->next;
            }
            //Even
            else{
                even->next = odd->next;
                if(even->next!=NULL) even = odd->next;
            }
            
            temp = temp->next;
            n++;
        }
        
        odd->next = evenlink;
        return head;
    }
    
    //Method 2: With using extra space. 
};
