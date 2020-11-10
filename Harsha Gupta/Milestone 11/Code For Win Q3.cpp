//Sum of all array elements

#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	int size,sum=0;
	cout<<"Enter the size of array: ";
	cin>>size;
	int a[size];
	cout<<"\nEnter the elements of Array: ";
	for(int i=0;i<size;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<size;i++)
	{
		sum+=a[i];
	}
	cout<<"\nSum of elements of array is "<<sum;
	return 0;
}
