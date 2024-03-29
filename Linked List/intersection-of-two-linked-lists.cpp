/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int len1 = 0;
        int len2 = 0;

        ListNode* temp = headA;
        while(temp!=NULL){
            len1++;
            temp = temp->next;
        }        

        temp = headB;
        while(temp!=NULL){
            len2++;
            temp = temp->next;
        }

        // cout<<"Length of List1: "<<len1<<endl;
        // cout<<"Length of List2: "<<len2<<endl;


        ListNode* p1 = headA;
        ListNode* p2 = headB;

        if(len1>len2){
            for(int i=0; i<(len1-len2); i++){
                p1 = p1->next;
            }
        }

        else if(len2>len1){
            for(int i=0; i<(len2-len1); i++){
                p2 = p2->next;
            }
        }

        while(p1!=NULL){
            if(p1==p2){
                break;
            }

            p1 = p1->next;
            p2 = p2->next;
        }

        return p1;
    }
};
