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
    
    //Approach 1: Using Extra Space:   Time: O(NlogN)  Space: O(N)
    ListNode* sortList(ListNode* head) {
        vector<int> vec;
        
        ListNode* temp = head;
        while(temp){
            vec.push_back(temp->val);
            temp = temp->next;
        }
        
        //Sorting Vector
        sort(vec.begin(), vec.end());
        temp = head;
        
        for(auto x: vec){
            temp->val = x;
            temp = temp->next;
        }
        
        return head;
    }
};
