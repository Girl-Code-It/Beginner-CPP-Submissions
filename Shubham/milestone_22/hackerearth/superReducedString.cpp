#include <iostream>
#include <string>

using namespace std;

struct node
{
        char data;
        node *next;
};

void push(node **top, char element)
{
        node *newNode = new node();
        newNode->data = element;
        newNode->next = *top;
        *top = newNode;
}

int isEmpty(node *top)
{
        if (top == nullptr)
                return true;
        return false;
}
char peek(node *top)
{
        if (top == nullptr)
                return '\0';
        return top->data;
}
char pop(node **top)
{
        if (isEmpty(*top))
                return '\0';
        else
        {

                char data = (*top)->data;
                node *p = *top;
                (*top) = (*top)->next;
                delete p;
                return data;
        }
}

void display(node *top)
{
        if (top == nullptr)
                cout << "Stack is Empty.\n";
        else
        {
                node *p = top;
                while (p != nullptr)
                {
                        cout << p->data;
                        p = p->next;
                }

                cout << endl;
        }
}


void stackCopy(node* from, node** to)
{
        *to = nullptr;
        while(from != nullptr)
        {
                push(to, from->data);
                from = from->next;
        }
}
int main()
{
        string S;
		cin >> S;
        node* stk = nullptr;
        for (int i = 0; i < S.length(); i++)
        {
                if(peek(stk) == S[i])
                        pop(&stk);
                else
                        push(&stk, S[i]);
        }
        node* ans = nullptr;

        stackCopy(stk, &ans);

        if(ans != nullptr)
                display(ans);
        else
                cout << "Empty String\n";
}
