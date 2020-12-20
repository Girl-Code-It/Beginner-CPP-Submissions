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
    
    char pop(node** top)
    {
        if(*top == nullptr)
            return '\0';
        node* p = *top;
        char data = (*top)->data;
        *top = (*top)->next;
        delete p;
        cout << data << " Popped out Successfully\n";
        return data;
    }
    char peek(node* top)
    {
        if(top == nullptr)
            return '\0';
        return top->data;
    }
    bool compareStack(node* top1, node* top2)
    {
        if(top1 == nullptr && top2 == nullptr)
                return true;
        while(top1 != nullptr && top2 != nullptr)
        {
            if(top1->data != top2->data)
                return false;
            pop(&top1);
            pop(&top2);
        }
        if(top1 == nullptr && top2 == nullptr)
                return true;
        return false;
    }
    bool backspaceCompare(string S, string T) {
        
        node* stk1 = nullptr;
        node* stk2 = nullptr;
        
        
        for(int i=0; i<S.length(); i++)
        {
            if(S[i] == '#')
                pop(&stk1);
            else
                push(&stk1, S[i]);
        }

        for(int i=0; i<T.length(); i++)
        {
            if(T[i] == '#')
                pop(&stk2);
            else
                push(&stk2, T[i]);
        }
        
        if(compareStack(stk1, stk2))
            return true;
        return false;
        
    }
