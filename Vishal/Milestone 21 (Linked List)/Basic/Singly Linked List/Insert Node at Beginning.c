//Program to Insert a node at beginning

#include<stdio.h>
#include<stdlib.h>

//typedef so we can simply use Node instead of struct Node
typedef struct Node
{
   //To store the element
    int data ;
   //To store the address of next element
   struct Node *next;

} Node;

//Pointer to head Node initialize to NULL
Node* head = NULL;

void Insert(int x)
{
   //A New space for new Node
   Node* temp = (Node*)malloc(sizeof(Node));

   //Store the value in the list
   (*temp).data = x;
   
   //Store the address
   (*temp).next = head;

   //Head Point to New node / head node
   head = temp;

}

void Print()
{
  //Initialize to Head Node
   Node* temp = head;

  printf("\nList is : ");
  
  //Print until Last node
  while(temp != NULL)
   {
     printf("%d ",(*temp).data);
     temp = (*temp).next;
   }
   
   printf("\n");
}

int main()
{
    int n,x;
    printf("How many Number : ");
    scanf("%d",&n);

    for(int i=0; i<n; i++)
    {
        printf("\nEnter the Number : ");
        scanf("%d",&x);
        Insert(x);
        Print();
    }

    return 0;
}