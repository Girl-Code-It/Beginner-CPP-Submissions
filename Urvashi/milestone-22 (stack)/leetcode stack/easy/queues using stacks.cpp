class MyQueue {
public:
    
    stack<int> s1, s2;
    
    void push(int x) {
        s1.push(x);
    }
    
    
    int pop() {
        
        int element = peek();
        if (element == -1)
            return -1;
        s2.pop();
        return element;
    }
    
    int peek() {
        if (s2.empty() && s1.empty())
            return -1;
        if (s2.empty()) {
            while (!s1.empty()) {
                s2.push(s1.top());
                s1.pop();
            }
        }
        return s2.top();
    }
    
    bool empty() {
        return s1.empty() && s2.empty();
    }
};
