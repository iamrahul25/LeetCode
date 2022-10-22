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
    
    ListNode* newhead;
    
    Solution(ListNode* head) {
        newhead = head;
    }
    
    int getRandom() {
        int n=0;
        ListNode* temp = newhead;
        while(temp!=NULL){
            n++;
            temp = temp->next;
        }
        
        int random = rand()%n;
        temp = newhead;
        while(random--){
            temp = temp->next;
        }
        
        return temp->val;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(head);
 * int param_1 = obj->getRandom();
 */
