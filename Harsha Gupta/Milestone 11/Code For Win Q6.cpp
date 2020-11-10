//Even and Odd Elements in the Array

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
	cout<<"\nEven elements: ";
	for(int i=0;i<size;i++)
	{
		if(a[i]%2==0)
			cout<<a[i]<<"  ";
	}
	cout<<"\nOdd elements: ";
	for(int i=0;i<size;i++)
	{
		if(a[i]%2!=0)
			cout<<a[i]<<"  ";
	}
	return 0;
}
