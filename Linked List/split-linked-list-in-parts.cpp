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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {

        int n = 0;
        ListNode* temp = head;
        
        while(temp!=NULL){
            n++;
            temp = temp->next;
        }
        
        int rem = 0, total = 1, loop = n;
        
        if(n>k){
            rem = n%k;
            total = n/k;
            loop = k;
        }
        
        vector<ListNode*> v(k,NULL);
        int i = 0;
        
        temp = head;
        
        while(loop--){
            int a = total;
            if(rem){
                a++;
                rem--;
            }

            ListNode* front = temp;
            while(--a){
                temp = temp->next;
            }
            
            ListNode* t = temp->next;
            temp->next = NULL;
            temp = t;
            
            v[i++] = front;
        }
        
        return v;
    }
};
