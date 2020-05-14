#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
    int data ;

    struct Node *next;

    struct Node *prev;

} Node;

Node* head = NULL;

void Insert(int x)
{
    Node* temp = (Node*)malloc(sizeof(Node));

    temp -> data = x;

    temp -> next = NULL;

    temp -> prev = NULL;

    if(head == NULL)
    {
        head = temp;
        return ;
    }

    head -> prev = temp;
    temp -> next = head;
    head = temp;
}

void Print()
{
    Node* temp = head;
    while(temp != NULL)
    {
        printf("%d ",temp -> data);
        temp = temp -> next;
    }
    printf("\n");
}

void ReversePrint()
{
    Node* temp = head;
    while(temp -> next != NULL)
        temp = temp -> next;
        
    while(temp)
    {
       printf("%d ",temp -> data);
       temp = temp -> prev;
    }
    printf("\n");
}

int main()
{
    int n,x;
    printf("      Insert At Beginning\n\n");
    printf("How many Number : ");
    scanf("%d",&n);

    for(int i=0; i<n; i++)
    {
        printf("Enter the Number : ");
        scanf("%d",&x);
        Insert(x);
    }
    printf("Forward List : ");
    Print();
    printf("Reverse List : ");
    ReversePrint();
    return 0;
}