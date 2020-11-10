//Maximum and minimum elements in an array

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
	int min=a[0];
	int max=a[0];
	for(int i=0;i<size;i++)
	{
		if(max<a[i])
		{
			max=a[i];
		}
		if(min>a[i])
		{
			min=a[i];
		}
	}
	cout<<"\nMaximum Element: "<<max;
	cout<<"\nMinimum Element: "<<min;
	return 0;
}
