#include <iostream>
#include <string.h>

using namespace std;

struct node
{
        int data;
        node *next;
};

void push(node **top, int element)
{
        node *newNode = new node;
        newNode->data = element;
        newNode->next = *top;
        *top = newNode;

}

int pop(node **top)
{
        if (*top == nullptr)
                cout << "Stack Underflow!!!\n";
        else
        {
                node *p = *top;
                int data = p->data;
                *top = (*top)->next;
                return data;
        }
        return 0;
}

void display(node *top)
{
        if (top == nullptr)
                cout << "Stack is Empty\n";
        else
        {
                node *p = top;

                while (p != nullptr)
                {
                        cout << p->data << " ";
                        p = p->next;
                }
                cout << endl;
        }
}

int peek(node *top)
{
        if (top == nullptr)
                return 0;
        return top->data;
}

int check(node* top)
{
        int count=0, current = top->data;
        while(top != nullptr)
        {
                if(current >= top->data)
                        count++;
                top = top->next;
        }
        return count;
}

int main()
{
        int t;
        cin >> t;
        while(t--)
        {
                node* stk = nullptr;
                int n;
                cin >> n;
                for(int i=0; i<n; i++)
                {
                        int data;
                        cin >> data;
                        push(&stk, data);
                        cout << check(stk) << " ";
                }
        }
}
