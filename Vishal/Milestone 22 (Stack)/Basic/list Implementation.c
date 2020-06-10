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
void Delete( )
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
void Print()
{
    stack *temp = top;
    if(!isEmpty())
    {
        printf("\nStack : ");
        while(temp)
           {
             printf("%d ",temp -> data);
             temp = temp -> next;
            }
        printf("\n");
    }
}
int main()
{
    int n,x;
    printf("Enter the No of element : ");
    scanf("%d",&n);

    for(int i=0; i<n; i++)
    {
        scanf("%d",&x);
        Push(x);
        Print();
    }
    printf("Top Element : %d\n",Top());
    Delete();
    Print();
    printf("Top Element : %d\n",Top());

    return 0;
}