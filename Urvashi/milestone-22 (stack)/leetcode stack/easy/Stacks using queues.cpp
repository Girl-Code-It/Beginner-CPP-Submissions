class MyStack
{
public:
    /** Initialize your data structure here. */

    queue<int> q;
    int s = 0;

    /** Push element x onto stack. */
    void push(int x)
    {
        s = q.size();
        q.push(x);
        for (int i = 0; i < s; i++)
        {
            q.push(q.front());
            q.pop();
        }
    }

    /** Removes the element on top of the stack and returns that element. */
    int pop()
    {
        s = q.front();
        q.pop();
        return s;
    }

    /** Get the top element. */
    int top()
    {
        return q.front();
    }

    /** Returns whether the stack is empty. */
    bool empty()
    {
        if (q.empty())
            return true;
        return false;
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */
