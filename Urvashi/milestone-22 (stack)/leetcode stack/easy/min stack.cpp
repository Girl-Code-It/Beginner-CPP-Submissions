class MinStack
{
private:
    int min;
    struct Node
    {
        int data;
        Node *next;
    };

    struct Node *Head;

public:
    /** initialize your data structure here. */

    MinStack()
    {
        Head = NULL;
        min = INT_MAX;
    }

    void push(int x)
    {

        struct Node *newNode = new Node();
        newNode->data = x;
        newNode->next = Head;
        Head = newNode;

        if (x < min)
            min = x;
    }

    void pop()
    {

        struct Node *temp = Head;
        Head = Head->next;

        if (temp->data == min)
        {

            struct Node *temp1 = Head;
            int nodemin = INT_MAX;
            while (temp1 != NULL)
            {
                if (temp1->data < nodemin)
                    nodemin = temp1->data;
                temp1 = temp1->next;
            }
            min = nodemin;
        }
        delete (temp);
    }

    int top()
    {

        if (Head == NULL)
            return NULL;
        else
            return Head->data;
    }

    int getMin()
    {
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
