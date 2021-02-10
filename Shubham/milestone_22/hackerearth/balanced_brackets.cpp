#include<iostream>
#include<string.h>

using namespace std;

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
}

char pop(node** top)
{
        if(*top == nullptr)
        {
                cout << "Stack Underflow!!!" << endl;
                return '\0';
        }
        node* p = *top;
        *top = (*top)->next;
        char data = p->data;
        delete p;
        return data;
}

char peek(node* top)
{
        if(top == nullptr)
                return '\0';
        return top->data;
}

void display(node* top)
{
        if(top == nullptr)
        {
                cout << "Stack is Empty.\n";
                return;
        }
        else
        {
                cout << "Stack is : \n";
                node* p = top;
                while(p != nullptr)
                {
                        printf("%c\t", p->data);
                        p = p->next;
                }
                cout << endl;
        }
        
}

int isEmpty(node* top)
{
        if(top == nullptr)
                return true;
        return false;
}

int compare(node* top,  char ch)
{
        if(ch == ')')
        {
                if(peek(top) == '(')
                        return true;
                else
                        return false;
        }
        else if(ch == ']')
        {
                if(peek(top) == '[')
                        return true;
                else
                        return false;
        }
        else if(ch == '}')
        {
                if(peek(top) == '{')
                        return true;
                else
                        return false;
        }
        return 0;
}

int checkParanthesis(char* S)
{
        node* stk = nullptr;
        int len = strlen(S);

        for(int i=0; i<len; i++)
        {
                if(S[i] == '(' || S[i] == '[' || S[i] == '{')
                        push(&stk, S[i]);
                else
                {
                        if(compare(stk, S[i]))
                                pop(&stk);
                        else
                                return false;                 

                }
        }
        if(isEmpty(stk))
                return true;
        return false;
}
int main()
{
		int n;
		cin >> n;
		while(n--)
		{
			char S[1000];
			cin >> S;
        	if(checkParanthesis(S))
            	    cout << "YES" << endl;
        	else
            	    cout << "NO" << endl; 
		}
}
