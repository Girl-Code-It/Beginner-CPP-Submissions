
//https://leetcode.com/problems/min-stack/submissions/

class MinStack {
private: 
    int min;
    struct Node{
        int data;
        Node* next;
    };
    
    struct Node* head;
    
public:
    /** initialize your data structure here. */
    MinStack() {
        head = NULL;
        min = INT_MAX;
    }
    
    void push(int x) {
        struct Node* temp = new Node();
        temp->data = x;
        temp->next = head;
        head = temp;
        if(x<min)
            min=x;
    }
    
    void pop() {
        struct Node* temp = head;
        head = temp->next;
        if(min == temp->data){
            struct Node* temp1 = head;
            int newMin = INT_MAX;
            while(temp1){
                if(temp1->data < newMin)
                    newMin = temp1->data;
                temp1 = temp1->next;
            }
            min = newMin;
        }
    }
    
    int top() {
        if(head == NULL)
            return NULL;
        else
       return head->data;
    }
    
    int getMin() {
        return min;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */


/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
