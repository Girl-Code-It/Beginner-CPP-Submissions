//Print all negative elements in an array 

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
	cout<<"\nNegative Elements of Array are: ";
	for(int i=0;i<size;i++)
	{
		if(a[i]<0)
		{
			cout<<a[i]<<"  ";
		}
	}
	return 0;
}
