//Copying elements to another array

#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	int size;
	cout<<"Enter the size of array: ";
	cin>>size;
	int a[size];
	int b[size];
	cout<<"\nEnter the elements of Array: ";
	for(int i=0;i<size;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<size;i++)
	{
		b[i]=a[i];
	}
	cout<<"\nCopied Elements Successfully !!";
	cout<<"\nElements of the other array are: ";
	for(int i=0;i<size;i++)
	{
		cout<<b[i]<<"  ";
	}
	return 0;
}
