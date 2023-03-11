class Solution {
public:

    //Time: O(N) Space: O(N)
    TreeNode* makeBST(vector<int>&arr, int i, int j){
        if(i>j) return NULL;
        int mid = (i+j)/2;
        return new TreeNode(arr[mid], makeBST(arr,i, mid-1), makeBST(arr, mid+1, j));
    }

    TreeNode* sortedListToBST(ListNode* head) {
        vector<int> arr;
        ListNode* temp = head;
        while(temp!=NULL){
            arr.push_back(temp->val);
            temp = temp->next;
        }
        TreeNode* root = makeBST(arr, 0, arr.size()-1);
        return root;
    }
};
