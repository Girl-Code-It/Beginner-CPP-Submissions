#include<iostream>

using namespace std;

struct Stack
{
        int top;
        unsigned int size;
        int* A;
};

Stack* createStack(int size)
{
        Stack* stk = new Stack();
        stk->top = -1;
        stk->A = new int(size);
        stk->size = size;
        return stk; 
}
int isFull(Stack* stk)
{
        if(stk->top == stk->size-1)
                return 1;
        return 0;
}

int isEmpty(Stack* stk)
{
        if(stk->top == -1)
                return 1;
        return 0;
}

void push(Stack* stk, int element)
{
        if(isFull(stk))
        {
                cout << "Stack Overflow!!!\n";
                return;
        }
        else
                stk->A[++stk->top] = element;
        cout << element << " is succesfully Pushed.\n";
}
int pop(Stack* stk)
{
        if(isEmpty(stk))
        {
                cout << "Stack Underflow!!!\n";
                return -1;
        }
        else
        {
                cout << stk->A[stk->top] << " is successfully Popped off.\n";
                return stk->A[stk->top--];
        }
}

void display(Stack* stk)
{
        if(isEmpty(stk))
        {
                cout << "Stack is Empty.\n";
                return;
        }
        else
        {
                int n = stk->top;
                cout << "Stack is : \n";
                while(n >= 0)
                        cout << stk->A[n--] << "\t";
                cout << endl; 
        }
        
}
int main()
{
        Stack* stk = createStack(5);
        push(stk, 10);
        push(stk, 20);
        push(stk, 30);
        
        display(stk);
        
        pop(stk);


        display(stk);
}
