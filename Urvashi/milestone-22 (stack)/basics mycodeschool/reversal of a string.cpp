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

void reverse(char *C, int n)
{
	stack<char> s;
	for (int i = 0; i < n; i++)
		s.push(C[i]);

	for (int i = 0; i < n; i++)
	{
		C[i] = s.top();
		s.pop();
	}
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
	char C[100];
	cout << "enter a string:" << endl;
	gets(C);
	int n = strlen(C);
	reverse(C, n);
	puts(C);
}
