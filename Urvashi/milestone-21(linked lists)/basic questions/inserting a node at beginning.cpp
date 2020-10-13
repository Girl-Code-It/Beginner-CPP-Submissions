//Linked list :Inserting a node at beginning.

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

void Insert(int x)
{

	node *temp = new node(); // a pointer to point next link.
	temp->data = x;			 //storing the value of x in linked list.
	temp->next = head;		 //making temp first node.
	head = temp;			 //head pointer points to temp now.
}

void Print()
{
	node *temp = head; // initialise temp to head node.
	cout << "List is :" << endl;
	while (temp != NULL) //to print the list upto end node.
	{
		cout << temp->data << "  "; //printing nodes.
		temp = temp->next;			//updating temp to next node to print all one by one.
	}
	cout << "\n";
}
int main()
{
	head = NULL; //empty list
	cout << " How many numbers? " << endl;
	int n, x;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << " Enter the number " << endl;
		cin >> x;
		Insert(x);
		Print();
	}
}
