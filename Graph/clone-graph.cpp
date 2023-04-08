
class Solution {
public:
    Node* cloneGraph(Node* node) {
        
        //Important condition.
        if(node==NULL) return NULL;

        Node* root = new Node(1);
        queue<pair<Node*, Node*>> q;
        q.push({root, node});

        //Visited Node: 
        vector<Node*> visited(101, NULL);
        visited[1] = root;

        while(!q.empty()){
            Node* clone = q.front().first;
            Node* original = q.front().second;

            for(auto x: original->neighbors){
                if(visited[x->val]==NULL){
                    Node* newnode = new Node(x->val);
                    visited[x->val] = newnode;
                    clone->neighbors.push_back(newnode);
                    q.push({newnode, x});
                }
                else{
                    clone->neighbors.push_back(visited[x->val]);
                }
            }
            q.pop();
        }
        
        return root;
    }
};
