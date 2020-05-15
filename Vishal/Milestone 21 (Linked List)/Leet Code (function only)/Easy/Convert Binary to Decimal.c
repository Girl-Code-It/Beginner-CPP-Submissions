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

int getDecimalValue(Node *head)
{
  int Ans = 0;
   while(head)
   {  
     Ans = 2*Ans + head -> data;  
     head = head -> next;   
   }
  return Ans;
}

int main()
{
    int n,x,val;
    printf("How many Number : ");
    scanf("%d",&n);

    for(int i=0; i<n; i++)
    {
        printf("Enter the Number : ");
        scanf("%d",&x);
        Insert(x);
    }
    Print();
    printf("Integral Value : %d\n",getDecimalValue(head));
    return 0;
}