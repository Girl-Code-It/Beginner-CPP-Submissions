//Program to Reverse Linked List

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

//fxn to Reverse linked list
void Reverse()
{
    Node *current,*prev,*next;

    current = head;
    prev = NULL;

    while(current != NULL)
    {
        next = current -> next ;
        current -> next  = prev;
        prev = current ;
        current = next;
    }
    head = prev;
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
    Insert(2);
    Insert(0);
    Insert(1);
    Insert(9);

    Print();

    printf("\nAfter Reversing");
    Reverse();
    Print();
    return 0;
}