//Read and print elements of array in reverse order

#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	int size;
	cout<<"Enter the size of array: ";
	cin>>size;
	int a[size];
	cout<<"\nEnter the elements of Array: ";
	for(int i=0;i<size;i++)
	{
		cin>>a[i];
	}
	cout<<"\nElements of array in reverse order: ";
	for(int i=size-1;i>=0;i--)
	{
		cout<<a[i]<<"  ";
	}
	return 0;
}
