//Second largest element in the array

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
	int max=a[0];
	int second_max=a[0];
	for(int i=0;i<size;i++)
	{
		if(max<a[i])
		{
			second_max=max;
			max=a[i];
		}
		else if(max>a[i] && second_max<a[i])
		{
			second_max=a[i];
		}
	}
	cout<<"\nSecond largest element in array is "<<second_max;
	return 0;
}
