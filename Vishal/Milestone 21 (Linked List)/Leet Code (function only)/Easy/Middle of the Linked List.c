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

Node* MiddleNode(Node* head)
{
  //As Fast moving at double speed hence
  //When fast reach End Node slow reach middle

   Node *slow = head,*fast = head;

  while(fast && fast -> next)
   {
        slow = slow -> next;
        fast = fast -> next -> next;
   }

   return slow;
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
    
    printf("Middle Node is %d.\n",*(MiddleNode(head)));
    return 0;
}