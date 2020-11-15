#include <iostream>
#include <stack>
#include <string.h>
using namespace std;

struct node
{
	int data;
	node *next;
};

node *head;

void reverse()
{
	if (!head)
		return;
	stack<node *> s;
	node *temp = head;

	while (temp)
	{
		s.push(temp);
		temp = temp->next;
	}
	temp = s.top();
	head = temp;
	s.pop();

	while (!s.empty())
	{
		temp->next = s.top();
		s.pop();
		temp = temp->next;
	}
	temp->next = NULL;
}
int isEmpty()
{
	return (head == NULL);
}

int Top()
{
	cout << head->data << endl;
}

void push(int x)
{
	node *temp = new node();

	if (!temp)
	{
		cout << "stack is full" << endl;
		return;
	}
	temp->data = x;
	temp->next = head;
	head = temp;
}

void pop()
{
	node *temp;
	if (head == NULL)
		return;
	else
		temp = head;
	head = head->next;
	delete temp;
}

void print()
{
	node *temp = head;
	cout << "List is :" << endl;
	while (temp != NULL)
	{
		cout << temp->data << "  ";
		temp = temp->next;
	}
	cout << "\n";
}

int main()
{
	push(5);
	print();
	push(1);
	print();
	pop();
	print();
	push(2);
	print();
	push(9);
	print();
	push(8);
	print();
	pop();
	print();
	push(6);
	print();
	push(7);
	print();
	pop();
	print();
	cout << "reverse linked list is = " << endl;
	reverse();
	print();
}
