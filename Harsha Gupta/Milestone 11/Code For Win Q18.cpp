//Searching for an element in array

#include<iostream>
#include<conio.h>
using namespace std;

int search(int a[], int n, int val)
{
	for(int i=0;i<n;i++)
	{
		if(a[i]==val)
		{
			return i+1;
			break;
		}
	}
	return -1;
}

int main()
{
	int size,val,ans;
	cout<<"Enter the size of array: ";
	cin>>size;
	int a[size];
	cout<<"\nEnter the elements of Array: ";
	for(int i=0;i<size;i++)
	{
		cin>>a[i];
	}
	cout<<"\nEnter the element to search for: ";
	cin>>val;
	ans=search(a,size,val);
	if(ans==-1)
	{
		cout<<"\nElement not found.";
	}
	else
	{
		cout<<"\nElement found at position "<<ans;
	}
	return 0;
}
