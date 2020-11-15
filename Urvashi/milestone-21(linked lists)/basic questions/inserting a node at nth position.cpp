//Linked list :Inserting a node at nth position.

#include <iostream>
#include <stdlib.h>
using namespace std;

struct node
{
	int data;	//variable to store data of type int .
	node *next; //variable to store address of next element.
};

//pointer to head node.
node *head; // global variable , can be accessed from anywhere .

void Insert(int data, int n)
{

	node *temp1 = new node(); // a pointer to point next link.
	temp1->data = data;		  //store the entered value in the list.
	temp1->next = NULL;		  //make next index variable null.

	if (n == 1) //if insertion taking place at beginning.
	{
		temp1->next = head; // push head to the next address.
		head = temp1;		//store the newly entered no at head.
		return;				//and simply return it.
	}
	node *temp2 = head; //temp2 is to link with (n-1)th node.

	for (int i = 0; i < n - 2; i++) //iterate to get (n-1)th node address.
		temp2 = temp2->next;

	temp1->next = temp2->next; //store new address.
	temp2->next = temp1;
}

void Print()
{
	node *temp = head; // initialise temp to head node.
	cout << "List is :" << endl;
	while (temp != NULL) //to print the list upto end node.
	{
		cout << (*temp).data << "  "; //printing nodes.
		temp = (*temp).next;		  //updating temp to next node to print all one by one.
	}
	cout << "\n";
}
int main()
{
	head = NULL;  //empty list
	Insert(2, 1); //List : 2
	Insert(3, 2); //List : 2,3
	Insert(4, 1); //List : 4,2,3
	Insert(5, 2); //List : 4,5,2,3
	Print();
}
