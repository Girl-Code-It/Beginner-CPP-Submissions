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
        (*top) = newNode;
        cout << element << " Pushed Successfully\n";
    }
    int isEmpty(node* top)
    {
        if(top == nullptr)
            return true;
        return false;
    }
    char pop(node** top)
    {
        if(isEmpty(*top))
            cout << "Stack Underflow\n";
        else
        {
            node* p = *top;
            *top = (*top)->next;
            char data = p->data;
            delete p;
            cout << data << " Popped Successfully.\n";
            return data;
        }
        return 0;
    }
    char peek(node* top)
    {
        if(top == nullptr)
                return '\0';
        return top->data;
    }
    bool compare(char a, char b)
    {
        if(a == ')' && b == '(')
            return true;
        else if(a == '}' && b == '{')
            return true;
        else if(a == ']' && b == '[')
            return true;
        return false;
    }
    bool isValid(string s) {
        
        
        //making stack
        node* stk = nullptr;
        for(int i=0; i<s.length(); i++)
        {
            if(s[i] == '(' || s[i] == '{' || s[i] == '[')
                push(&stk, s[i]);
            else
            {
                if(compare(s[i], peek(stk)))
                    pop(&stk);
                else
                    return false;
            }
        }            
        if(stk == nullptr)
            return true;
        return false;
    }
