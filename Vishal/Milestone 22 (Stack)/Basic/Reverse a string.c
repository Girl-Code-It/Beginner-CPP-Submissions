#include<stdio.h>

typedef struct Stack
{
    int data;
    struct Stack* next;
} stack;

stack *top = NULL;

int isEmpty()
{
    return (top == NULL);
}

void Push(int x)
{
    stack *newNode = (stack*)malloc(sizeof(stack));

    if(!newNode)
    {
        printf("Stack is Full.\n");
        return;
    }
    newNode -> data = x;
    newNode -> next = top;
    top = newNode;
}

void Pop( )
{
    if(isEmpty())
    {
        printf("Empty Stack.\n");
        return;
    }

    stack *temp = top;
    top = temp -> next;
    free(temp);
}

int Top()
{
    if(isEmpty())
    {
        printf("Empty Stack.\n");
        return 0;
    }
    return top -> data;
}

void Reverse(char *str,int n)
{
    for(int i = 0; i<n; i++)
        Push(str[i]);

    for(int i = 0; i<n; i++)
    {
        str[i] = Top();
        Pop();
    }
}
int main()
{
    char str[100];
    printf("Enter the String : ");
    gets(str);

    Reverse(str,strlen(str));
    printf("Reversed String : %s\n",str);
    return 0;
}