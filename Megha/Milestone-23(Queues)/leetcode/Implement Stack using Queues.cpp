class MyStack {
public:
    /** Initialize your data structure here. */
    MyStack() {
        
    }
    
    /** Push element x onto stack. */
    void push(int x) {
        while(!q1.empty()){
            q2.push(q1.front());
            q1.pop();
        }
        
        q1.push(x);
        
         while(!q2.empty()){
            q1.push(q2.front());
            q2.pop();
        }
        
    }
    
    /** Removes the element on top of the stack and returns that element. */
    int pop() {
        if(q1.empty()){
            return -1;
        }
        
        int ans = q1.front();
        q1.pop();
        return ans;
    }
    
    /** Get the top element. */
    int top() {
        if(q1.empty()){
            return -1;
        }
        return q1.front();
    }
    
    /** Returns whether the stack is empty. */
    bool empty() {
        if(q1.empty()){
            return true;
        }
        return false;
    }
    private:
    queue<int> q1;
    queue<int> q2;
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */
