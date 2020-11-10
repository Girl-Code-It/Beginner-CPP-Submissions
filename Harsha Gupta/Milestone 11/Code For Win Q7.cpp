//Count total no. of negative elements in array

#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	int size,c;
	cout<<"Enter the size of array: ";
	cin>>size;
	int a[size];
	cout<<"\nEnter the elements of Array: ";
	for(int i=0;i<size;i++)
	{
		cin>>a[i];
		if(a[i]<0)
		{
			c++;
		}
	}
	cout<<"\nNo. of negative elements in array: "<<c;
	return 0;
}
