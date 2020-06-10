#include<stdio.h>

#define Max 10

int arr[Max];
int top = -1;

int isFull()
{
    return (top == Max-1);
}
int isEmpty()
{
    return (top == -1);
}

void Push(int x)
{
    if(isFull())
    {
        printf("Stack is Full.\n");
        return;
    }
    arr[++top] = x;
}
void Delete( )
{
    if(isEmpty())
    {
        printf("Empty Stack.\n");
        return;
    }
    top--;
}

int Top()
{
    if(isEmpty())
    {
        printf("Empty Stack.\n");
        return 0;
    }
    return arr[top];
}
void Print()
{
   if(!isEmpty())
    {
    printf("\nStack : ");
    for(int i=0; i<=top; i++)
        printf("%d ",arr[i]);

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