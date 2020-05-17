//Program to Find Middle Node

#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;

} Node;

Node* head = NULL;

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

void Print()
{
    Node* temp = head;

    printf("\nList is : ");

    while(temp != NULL)
    {
        printf("%d ",(*temp).data);
        temp = (*temp).next;
    }

    printf("\n");
}

Node* deleteDuplicate(Node* head)
{
    Node *current = head;
    
    while(current && current -> next)
    {
       if(current -> data == current -> next -> data)
         current -> next = current -> next -> next;
        else
         current = current -> next;
    }
    return head;
}

int main()
{
    int n,x;
    printf("How many Number : ");
    scanf("%d",&n);

    for(int i=0; i<n; i++)
    {
        printf("Enter the Number : ");
        scanf("%d",&x);
        Insert(x);
    }
    
    Print();
    
    head = deleteDuplicate(head);
    Print();
    return 0;
}