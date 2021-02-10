#include<iostream>

using namespace std;

struct node
{
        int data;
        struct node* next;
};

int peek(node* top)
{
        if(top == nullptr)
                return 0;
        return top->data;
}

int isEmpty(node* top)
{
        if(top == nullptr)
                return true;
        return false;
}
void push(node** top, int element)
{
        node* newNode = new node();
        newNode->data = element;
        newNode->next = *top;
        *top = newNode;
}

int pop(node** top)
{
        if(isEmpty(*top))
                return false;
        int data = (*top)->data;
        node* p = *top;
        *top = (*top)->next;
        delete(p);
        return data;
}



void display(node* top)
{
        if(top == nullptr)
                cout << "Stack is Empty\n";
        else
        {
                cout << "Stack is :\n";
                node* p = top;
                while(p != nullptr)
                {
                        cout << p->data << "\t";
                        p = p->next;
                }
                cout << endl;
        }
        
}
int main()
{
		int n;
		cin >> n;
		int A[n];
		for(int i=0; i<n; i++)
			cin >> A[i];
        node* stk1 = nullptr;
        node* stk2 = nullptr;

        for(int i=n-1; i>=0; i--)
                push(&stk1, A[i]);

        for(int i=0; i<n; i++)
                push(&stk2, A[i]);

        while(stk1 != nullptr && stk2 != nullptr)
        {
                if(peek(stk1) > peek(stk2))
                {
                        cout << 1 << " ";
                        pop(&stk2);
                }
                else if(peek(stk1) < peek(stk2))
                {
                        cout << 2 << " ";
                        pop(&stk1);
                }
                else
                {
                        cout << 0 << " ";
                        pop(&stk1);
                        pop(&stk2);
                }
                
        }
        cout << endl;
}
