#include <stdio.h>
#include <iostream>
#include <stdlib.h>
using namespace std;
struct Node
{
	int data;
	struct Node *next;
	struct Node *prev;
};

struct Node *head; // global variable - pointer to head node.

//Creates a new Node and returns pointer to it.
struct Node *GetNewNode(int x)
{
	struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
	newNode->data = x;
	newNode->prev = NULL;
	newNode->next = NULL;
	return newNode;
}

//Inserts a Node at head of doubly linked list
void InsertAtHead(int x)
{
	struct Node *newNode = GetNewNode(x);
	if (head == NULL)
	{
		head = newNode;
		return;
	}
	head->prev = newNode;
	newNode->next = head;
	head = newNode;
}

//Inserts a Node at tail of Doubly linked list
void InsertAtTail(int x)
{
	struct Node *temp = head;
	struct Node *newNode = GetNewNode(x);
	if (head == NULL)
	{
		head = newNode;
		return;
	}
	while (temp->next != NULL)
		temp = temp->next; // Go To last Node

	temp->next = newNode;
	newNode->prev = temp;
}

//Prints all the elements in linked list in forward traversal order
void Print()
{
	struct Node *temp = head;
	printf("Forward: ");
	while (temp != NULL)
	{
		printf("%d ", temp->data);
		temp = temp->next;
	}
	printf("\n");
}

//Prints all elements in linked list in reverse traversal order.
void ReversePrint()
{
	struct Node *temp = head;
	if (temp == NULL)
		return; // empty list, exit
	// Going to last Node
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	// Traversing backward using prev pointer
	printf("Reverse: ");
	while (temp != NULL)
	{
		printf("%d ", temp->data);
		temp = temp->prev;
	}
	printf("\n");
}

int main()
{

	head = NULL; // empty list. set head as NULL.
	int n, x;
	cout << "how many numbers?" << endl;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> x;
		InsertAtTail(x);
		Print();
		ReversePrint();
	}
}
