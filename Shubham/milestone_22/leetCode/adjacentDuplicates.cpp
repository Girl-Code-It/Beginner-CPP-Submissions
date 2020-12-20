    
    struct node
    {
        char data;
        node* next;
    };
    
    void push(node** top, char element)
    {
        node* newNode = new node();
        newNode->data = element;
        newNode->next = *top;
        *top = newNode;
        cout << element << " Pushed Successfully\n";
    }
    
    bool isEmpty(node* top)
    {
        if(top == nullptr)
            return true;
        return false;
    }
    
    char peek(node* top)
    {
        if(top == nullptr)
            return '\0';
        return top->data;
    }
    
    char pop(node** top)
    {
        if(*top == nullptr)
            cout << "Stack Underflow\n";
        else
        {
            node* p = *top;
            char data = (*top)->data;
            *top = (*top)->next;
            delete p;
            cout << data << " Popped out Successfully\n";
            return data;
        }
        return '\0';
    }
    
    void stackCopy(node *top1, node **top2)
    {
        *top2 = nullptr;
        while (top1 != nullptr)
        {
            push(top2, top1->data);
            top1 = top1->next;
        }
    }
    
    string removeDuplicates(string S)
    {
         //push the string in the stack
    node *stk = nullptr;
    node *stk1 = nullptr;
    for (int i = 0; i < S.length(); i++)
        push(&stk, S[i]);
    int flag = 0;
    while (1)
    {
        char data = pop(&stk);
        if (data == peek(stk))
        {
            pop(&stk);
            flag = 1;
        }
        else
            push(&stk1, data);

        if (stk == nullptr)
        {
            stackCopy(stk1, &stk);
            if (flag == 0)
                break;
            else
                flag = 0, stk1 = nullptr;
        }
    }

    //copy stack to string
    string T;

    while(stk1 != nullptr)
    {
        T += peek(stk1);
        stk1 = stk1->next;
    }

    return T;
    }
