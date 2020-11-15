//Insertion in an array

#include<iostream>
#include<conio.h>
using namespace std;

void insert(int a[], int size, int x, int pos)
{
	a[size++];
	for(int i=size;i>=pos;i--)
    {
		a[i]=a[i-1];
    }
	a[pos]=x;
}

int main()
{
	int size,x,pos;
	cout<<"Enter the size of array: ";
	cin>>size;
	int a[size];
	cout<<"\nEnter the elements of Array: ";
	for(int i=0;i<size;i++)
	{
		cin>>a[i];
	}
	cout<<"\nEnter the element to insert: ";
	cin>>x;
	cout<<"\nEnter the index where element is to be inserted: ";
	cin>>pos;
	insert(a,size,x,pos);
	cout<<"\nElements of Array are: ";
	for(int i=0;i<=size;i++)
	{
		cout<<a[i]<<"  ";
	}
	return 0;
}
