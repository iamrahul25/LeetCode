/**
 * Definition for linked list.
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
    //Time: O(N) and Space: O(N)
    int getDecimalValue(ListNode* head) {
        
        ListNode* temp = head;
        stack<bool> st;
        
        while(temp!=NULL){
            st.push(temp->val);
            temp = temp->next;
        }
        
        int res = 0;
        int pow = 1;
        while(!st.empty()){
            res = res + (st.top()*pow);
            st.pop();
            pow = pow*2;
            
        }
        
        return res;
        
    }
};
