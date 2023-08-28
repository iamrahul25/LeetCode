//Link: https://leetcode.com/problems/implement-stack-using-queues/description/



//Approach 2 (Push Costly): PUSH - O(N), POP - O(1), TOP - O(1)
class MyStack {
public:

    queue<int> q1;
    queue<int> q2;

    MyStack() {}
    
    void push(int x) {
        q2.push(x);
        while(!q1.empty()){
            q2.push(q1.front());
            q1.pop();
        } 

        queue<int> emptyque;
        q1 = q2;
        q2 = emptyque;
    }
    
    int pop() {
        int top = q1.front();
        q1.pop();
        return top;
    }
    
    int top() {
        return q1.front();
    }
    
    bool empty() {
        return (q1.size()==0);
    }
};

//Approach 1 (Pop Costly): PUSH - O(1) , POP - O(N) , TOP - O(N)
/*
class MyStack {
public:

    queue<int> q1;
    queue<int> q2;

    MyStack() {}
    
    void push(int x) {
        if(q1.size()==0) q2.push(x);
        else q1.push(x);
    }
    
    int pop() {
        int popval;
        if(q1.size()==0){
            while(q2.size()!=1){
                q1.push(q2.front());
                q2.pop();
            }
            popval = q2.front();
            q2.pop();
        }
        else{
            while(q1.size()!=1){
                q2.push(q1.front());
                q1.pop();
            }
            popval = q1.front();
            q1.pop();
        }
        return popval;
    }
    
    int top() {
        int topval;

        if(q1.size()==0){
            while(q2.size()!=1){
                q1.push(q2.front());
                q2.pop();
            }
            topval = q2.front();
            q1.push(q2.front());
            q2.pop();
        }
        else{
            while(q1.size()!=1){
                q2.push(q1.front());
                q1.pop();
            }
            topval = q1.front();
            q2.push(q1.front());
            q1.pop();
        }
        return topval;
    }
    
    bool empty() {
        if(q1.size()==0 && q2.size()==0) return true;
        return false;
    }
};
*/

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */
