/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:

    //Approach 3: Without using extra Space


    //Approach 2: Without using Less Extra Space: 
    Node* connect(Node* root){

        if(root==NULL) return NULL;

        queue<Node*> q;
        q.push(root);

        while(!q.empty()){
            int n = q.size();
            vector<Node*> arr(n);
            for(int i=0; i<n; i++){
                Node* front = q.front();
                if(front->left!=NULL) q.push(front->left);
                if(front->right!=NULL) q.push(front->right);

                arr[i] = front;
                q.pop();
            }

            for(int i=0; i<n-1; i++){
                arr[i]->next = arr[i+1];
            }
            arr[n-1]->next = NULL;
        }

        return root;
    }


    //Approach 1: Level Order Traversal & Using Extra Space.
    /*
    Node* connect(Node* root){

        if(root==NULL) return NULL;

        vector<vector<Node*>> ans;
        queue<Node*> q;
        q.push(root);

        while(!q.empty()){
            int n = q.size();
            vector<Node*> arr;
            for(int i=0; i<n; i++){
               Node* front = q.front();
               if(front->left!=NULL) q.push(front->left);
               if(front->right!=NULL) q.push(front->right);
               arr.push_back(front);
               q.pop();
            }
            ans.push_back(arr);
        }

        for(int i=0; i < ans.size(); i++){
            int n = ans[i].size();
            for(int j=0; j<n-1; j++){
                ans[i][j]->next = ans[i][j+1];
            }
            ans[i][n-1]->next = NULL;
        }

        return root;
    }
    */
};
