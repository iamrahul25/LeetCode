//This Problem Can be Done using: 
//1. Doubly Linked List
//2. 2 - Stacks
//3. Vector of STL

//Method 1: Using Doubly Linked List in STL------------------------

// class BrowserHistory {
// public:

//     //Doubly Linked List
//     list<string> L;
//     list<string>::iterator itr;
    
//     BrowserHistory(string homepage) {
//         L.push_back(homepage);
//         itr = L.begin();
//     }
    
//     void visit(string url){
//         auto temp = itr;
//         temp++;
//         L.erase(temp, L.end());
//         L.push_back(url);
//         itr++;
//     }
    
//     string back(int steps) {
//         while((steps--) && (itr!=L.begin())){
//             itr--;
//         }
//         return *itr;
//     }
    
//     string forward(int steps) {
//         while((steps--) && (itr!=(--L.end()))){
//             itr++;
//         }
//         return *itr;
//     }
// };


//Method 2: Using Vector-------------------------------------------------
// class BrowserHistory {
// public:

//     //Doubly Linked List
//     vector<string> vec;
//     int idx = -1;
    
//     BrowserHistory(string homepage) {
//         vec.push_back(homepage);
//         idx = 0;
//     }
    
//     void visit(string url){
//         //Clearing Old History
//         vec.erase(vec.begin()+idx+1, vec.end());
//         //Inserting current URL
//         vec.push_back(url);
//         idx++;
//     }
    
//     string back(int steps) {
//         while(steps-- and idx>0){
//             idx--;
//         }
//         return vec[idx];
//     }
    
//     string forward(int steps) {
//         while((steps--) && (idx<vec.size()-1)){
//             idx++;
//         }
//         return vec[idx];
//     }
// };

//Method 3: Using 2 - Stacks----------------------------------------------
class BrowserHistory {
public:
    
    stack<string> st1;
    stack<string> st2;

    BrowserHistory(string homepage) {
        st1.push(homepage);
    }
    
    void visit(string url){
        while(!st2.empty()) st2.pop();
        st1.push(url);
    }
    
    string back(int steps) {
        while((steps--) && (st1.size()>1)){
            st2.push(st1.top());
            st1.pop();
        }
        return st1.top();
    }
    
    string forward(int steps) {
        while((steps--)&&(!st2.empty())){
            st1.push(st2.top());
            st2.pop();
        }
        return st1.top();
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */
