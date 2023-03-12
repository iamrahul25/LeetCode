class Solution {
public:

    //Approach 2: Without Using Extra Space: Time: O(N) Space: O(1)
    ListNode* mergeTwoLists(ListNode* a, ListNode* b){
        if(a==NULL) return b;
        if(b==NULL) return a;
        
        ListNode* c = NULL;
        ListNode* last = NULL;
    
        while(a!=NULL and b!=NULL){
            if(a->val < b->val){
                if(c==NULL){c = a; last = a;}
                else{last->next = a; last = last->next;}
                a = a->next;
            }
            else{
                if(c==NULL){c = b; last = b;}
                else{last->next = b; last = last->next;}
                b = b->next;
            }
        }

        while(a!=NULL){
            last->next = a;
            last = last->next;
            a = a->next;
        }

        while(b!=NULL){
            last->next = b;
            last = last->next;
            b = b->next;
        }

        return c;
    }


    ListNode* mergeKLists(vector<ListNode*>& lists) {
        int n = lists.size();
        if(n==0) return NULL;
        if(n==1) return lists[0];

        for(int i=1; i<n; i++){
            lists[0] = mergeTwoLists(lists[0], lists[i]);
        }

        return lists[0];
    }

    //Approach 1: Using Extra Space  Time: O(NlogN) Space: O(N)
    // ListNode* mergeKLists(vector<ListNode*>& lists) {
    //     vector<int> arr;
    //     for(auto l: lists){
    //         ListNode* temp = l;
    //         while(temp){
    //             arr.push_back(temp->val);
    //             temp = temp->next;
    //         }
    //     }

    //     if(arr.size()==0) return NULL;

    //     sort(arr.begin(), arr.end());
    //     ListNode* head = new ListNode(arr[0]);
    //     ListNode* last = head;

    //     for(int i=1; i<arr.size(); i++){
    //         ListNode* newnode = new ListNode(arr[i]);
    //         last->next = newnode;
    //         last = last->next;
    //     }

    //     return head;
    // }
};
