//Linked list :Reversing a node .

#include <iostream>
#include <stdlib.h>
using namespace std;

struct node
{
	int data;	//variable to store data of type int .
	node *next; //variable to store address(link) of next element.
};

struct node *Reverse(node *head) //now this time i have not declared the variable head globally so i have to
// pass it in every fxn
{
	// taking three pointers , current to store current position's address, next for next , and prev for
	//previous.
	node *current, *prev, *next;
	current = head;			//initially we are starting with head node.
	prev = NULL;			//that's why previous node address is NULL.
	while (current != NULL) //iterating upto last node.
	{
		next = current->next; //store the address of next node in variable next.
		current->next = prev; // link of the current node is set as the address of the previous node.
		prev = current;		  //now come to the next index .
		current = next;
	}
	head = prev; //at the end of the while loop , the variable prev will store the address of the last element
	//  so make the last element to head.
	return head;
}

node *Insert(node *head, int data)
{

	node *temp = new node(); // a pointer to point next link.
	temp->data = data;		 //store the entered value in the list.
	temp->next = NULL;		 //make next index variable null.

	if (head == NULL) //if insertion taking place at beginning.
		head = temp;
	else
	{
		node *temp1 = head;			// temp1 initially sets at address of head.
		while (temp1->next != NULL) //iterating upto end.
			temp1 = temp1->next;
		temp1->next = temp;
	}
	return head;
}

void Print(node *head)
{
	while (head != NULL)
	{
		cout << head->data << " ";
		head = head->next;
	}
	cout << "\n";
}
int main()
{
	node *head = NULL;		//empty list ... head is here local variable.
	head = Insert(head, 2); // Insert: struct node* Insert(struct node* head, int data).
	head = Insert(head, 4);
	head = Insert(head, 6);
	head = Insert(head, 8);
	Print(head);
	head = Reverse(head);
	Print(head);
}
