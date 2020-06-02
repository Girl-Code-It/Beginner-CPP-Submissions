//Program to Insert a node at n'th Node

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

void Insert(int x,int n)
{
    //Extra space for new Node
    Node* temp = (Node*)malloc(sizeof(Node));

    //Store the value in the Node
    temp -> data  = x;

    //Initialize address as NULL
    temp -> next = NULL;

    //If Insertion taking place at Beginning
    if(n == 1)
    {
        temp -> next  = head;
        head = temp;//It Point Head Node
        return ;
    }

   //To connect link with (n-1)th Node
    Node* temp1 = head;

   //Iterate to get (n-1)th Node address
   for(int i = 0;i < n-2 ; i++)
     temp1 = temp1 -> next;

   //Store new address
   temp -> next = temp1 -> next;

   temp1 -> next = temp;

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

    Insert(2,1);// 2
    Insert(3,2);// 2 3
    Insert(4,2);// 2 4 3
    Insert(6,1);// 6 2 4 3
    Insert(5,3);// 6 2 5 4 3

    Print();
    return 0;
}