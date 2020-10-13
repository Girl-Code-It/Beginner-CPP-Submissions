//Linked list :Reversing a node .

#include <iostream>
#include <stdlib.h>
using namespace std;

struct node
{
    int data;   //variable to store data of type int .
    node *next; //variable to store address(link) of next element.
};

node *head; //global variable head.

void Reverse(node *p) //to reverse a linked list.
{
    if (p->next == NULL) //base condition.
    {
        head = p; //storing address of last node i the pointer head.
        return;
    }

    Reverse(p->next);  //recursive call.
    node *q = p->next; //as recursion is folding up . so we are traversing the list from backward direction from this step.
    q->next = p;
    p->next = NULL; // end node points to null
}

node *Insert(int data)
{

    node *temp = new node(); // a pointer to point next link.
    temp->data = data;       //store the entered value in the list.
    temp->next = NULL;       //make next index variable null.

    if (head == NULL) //if insertion taking place at beginning.
        head = temp;
    else
    {
        node *temp1 = head;         // temp1 initially sets at address of head.
        while (temp1->next != NULL) //iterating upto end.
            temp1 = temp1->next;
        temp1->next = temp;
    }
}

void Print()
{
    node *temp = head;   // initialise temp to head node.
    while (temp != NULL) //to print the list upto end node.
    {
        cout << temp->data << " "; //printing nodes.
        temp = temp->next;         //updating temp to next node to print all one by one.
    }
    cout << "\n";
}
int main()
{
    node *head = NULL; //empty list ... head is here local variable.
    head = Insert(2);
    head = Insert(4);
    head = Insert(6);
    head = Insert(8);
    Print();
    Reverse(head);
    Print();
}
