//Read and print elements of array

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
	cout<<"\nElements of Array are: ";
	for(int i=0;i<size;i++)
	{
		cout<<a[i]<<"  ";
	}
	return 0;
}
