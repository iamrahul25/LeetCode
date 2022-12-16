class MyQueue {

private: 
    stack<int> s1, s2;

public:

    // MyQueue() {}   //No use of Constructor so comment it. 
    
    void push(int x) {
        s1.push(x);
    }
    
    int pop() {
        //If Queue (Stack) is Empty
        if(s1.empty()) return NULL;

        while(!s1.empty()){
            s2.push(s1.top());
            s1.pop();
        }

        int top = s2.top();
        //Removing Top element.
        s2.pop();

        while(!s2.empty()){
            s1.push(s2.top());
            s2.pop();
        }

        return top;
    }
    
    int peek() {
        //If Queue (Stack) is Empty
        if(s1.empty()) return NULL;

        while(!s1.empty()){
            s2.push(s1.top());
            s1.pop();
        }

        int top = s2.top();
        while(!s2.empty()){
            s1.push(s2.top());
            s2.pop();
        }

        return top;
    }
    
    bool empty() {
        if(s1.empty()) return true;
        else return false;
    }
};
