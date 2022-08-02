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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        
        if(list1==NULL){
            return list2;
        }
        
        else if(list2==NULL){
            return list1;
        }

        ListNode* p1 = list1;
        ListNode* p2 = list2;

        ListNode* list3 = new ListNode();

        //Inserting First Element. 
        if(p1->val <= p2->val){
            list3->val = p1->val;
            p1 = p1->next;
        }

        else{
            list3->val = p2->val;
            p2 = p2->next;
        }

        ListNode* temp = list3;
        while(p1!=NULL and p2!=NULL){

            if(p1->val <= p2->val){
                ListNode* newNode = new ListNode(p1->val,NULL);

                p1 = p1->next;
                temp->next = newNode;
                temp = newNode;
            }

            else{
                ListNode* newNode = new ListNode(p2->val,NULL);

                p2 = p2->next;
                temp->next = newNode;
                temp = newNode;
            }

        }

        if(p1!=NULL){
            temp->next = p1;
        }

        else if(p2!=NULL){
            temp->next = p2;
        }

        // print_list(list3);

        return list3;
    }
};
