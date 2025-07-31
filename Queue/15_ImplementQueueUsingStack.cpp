class MyQueue {//leetcode-> 232;
public:
    stack<int> st;
    stack<int> temp;
    MyQueue() {
        // stack<int> st;
        // stack<int> temp;
    }
    
    void push(int x) {
        st.push(x);
    }
    
    int pop() {
        while(st.size()!=0){
            temp.push(st.top());
            st.pop();
        }
        int p=temp.top();
        temp.pop();
        while(temp.size()!=0){
            st.push(temp.top());
            temp.pop();
        }
        return p;
    }
    
    int peek() {
        while(st.size()!=0){
            temp.push(st.top());
            st.pop();
        }
        int b= temp.top();
        while(temp.size()!=0){
            st.push(temp.top());
            temp.pop();
        }
        return b;
    }
    
    bool empty() {
        if(st.size()==0) return true;
        else return false;
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */