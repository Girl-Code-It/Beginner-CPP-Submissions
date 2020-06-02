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

void Insert(int data)
{
    Node* temp = (Node*)malloc(sizeof(Node));

    temp -> data = data ;

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

//Print the list
void Print(Node *p)
{
    //Base Condition
    if(p == NULL)
        return ;

    printf("%d ",p -> data);
    Print(p -> next);
}

//reverse the list Recursively
void Reverse(Node *p)
{
    //Base Condition
    if(p -> next == NULL)
    {
        head = p;
        return;
    }

    Reverse(p -> next);

    p -> next -> next = p;

    p -> next = NULL;

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
    Reverse(head);
    Print(head);
    return 0;
}