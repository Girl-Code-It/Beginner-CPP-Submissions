#include <iostream>
#define max_size 100
using namespace std;
int a[max_size];
int top = -1;

int isEmpty()
{
	return (top == -1);
}

int isFull()
{
	return (top == max_size - 1);
}
int Top()
{
	return a[top];
}
void push(int x)
{
	if (isFull())
	{
		cout << "stack overflows.." << endl;
		return;
	}
	a[++top] = x;
}
void pop()
{
	if (isEmpty())
	{
		cout << "stack underflows..." << endl;
		return;
	}
	top--;
}
void print()
{
	if (!isEmpty())
	{
		cout << "stack is=" << endl;
		for (int i = 0; i <= top; i++)
			cout << a[i] << " ";
		cout << endl;
	}
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
}
