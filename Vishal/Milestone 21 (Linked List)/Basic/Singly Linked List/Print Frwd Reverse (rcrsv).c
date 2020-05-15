/*
Program to Print both forward &
reverse printing of Linked List
Using Recursion 
*/

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
    //Extra space for new Node
    Node* temp = (Node*)malloc(sizeof(Node));
    
   //Store the value
    temp -> data = x ;
    
    //To append at end
    temp -> next = NULL;

    //If list was empty then it is a head Node
    if(head == NULL)
        head = temp;
    else
    {
       //To Storing the address we need a variable
        Node* temp1 = head;

      //Second Last Node
        while(temp1 -> next != NULL)
            temp1 = temp1 -> next;

        temp1 -> next = temp;
    }
}

//Print the list
void Print(Node *p)
{
   //Base Condition
   if(p == NULL)
   return ;

   printf("%d ",p -> data);
   Print(p -> next);
}

//Print the reverse list
void Print1(Node *p)
{
    //Base Condition
   if(p == NULL)
   return ;
 
   Print1(p -> next);
   printf("%d ",p -> data);

}
int main()
{
    Insert(1);
    Insert(2);
    Insert(3);
    Insert(4);
   
    printf("\nOriginal List : ");
    Print(head);
    printf("\nReverse List  : ");
    Print1(head);
    return 0;
}