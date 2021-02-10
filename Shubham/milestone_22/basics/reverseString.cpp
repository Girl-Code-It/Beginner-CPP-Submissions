#include<iostream>
#include<string.h>

using namespace std;

struct Stack
{
        int top;
        unsigned int size;
        char* A;
};

Stack* createStack(int size)
{
        Stack* stk = new Stack();
        stk->top = -1;
        stk->size = size;
        stk->A = new char(size);

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
void push(Stack* stk, char element)
{
        if(isFull(stk))
        {
                cout << "Stack Overflow!!!" << endl;
                return;
        }
        else
        {
                stk->A[++stk->top] = element;
                printf("%c pushed succesfully.\n", element);
        }
        
}

int pop(Stack* stk)
{
        if(isEmpty(stk))
        {
                cout << "Stack Underflow!!!" << endl;
                return -1;
        }
        else
        {
                cout << stk->A[stk->top] << " popped successfully.\n";
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

void reverse(char* S, int n)
{
        Stack* stk = createStack(n);
        for(int i=0; i<n; i++)
                push(stk, S[i]);
        for(int i=0; i<n; i++)
                S[i] = pop(stk);
}
int main()
{
       char S[] = "hello";
       int length = strlen(S);
       cout << length << endl;
       reverse(S, length);
       cout << S << endl;
}
