#include<stdio.h>

typedef struct Node
{
    int data;
    struct Stack* next;
} Node;

Node *head = NULL;

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

void Insert(int x)
{
    Node* temp = (Node*)malloc(sizeof(Node));

    temp -> data = x ;

    temp -> next = NULL;

    if(head == NULL)
        head = temp;
    else
    {
        Node* temp1 = head;

        while(temp1 -> next != NULL)
            temp1 = temp1 -> next;

        temp1 -> next = temp;
    }
}

void Reverse()
{
   if(head == NULL)
    return;
    
    stack *temp1 = head;
    while(temp1)
    {
       Push(temp1);
       temp1= temp1 -> next;
    }
    temp1 = Top();
    head = temp1;
    Pop();
    
    while(!isEmpty())
     {
         temp1 -> next = Top();
         Pop();
         temp1 = temp1 -> next;
     }
    temp1 -> next = NULL;
}
void Print()
{
    Node *temp = head;

    printf("List : ");
    while(temp)
    {
        printf("%d ",temp -> data);
        temp = temp -> next;
    }
    printf("\n");
}

int main()
{
    int n,x;
    printf("Enter the No of element : ");
    scanf("%d",&n);

    for(int i=0; i<n; i++)
    {
        scanf("%d",&x);
        Insert(x);
        Print();
    }
    printf("Reverse ");
    Reverse();
    Print();
   
    return 0;
}