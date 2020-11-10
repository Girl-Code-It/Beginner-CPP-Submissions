//Deletion from Array

#include<iostream>
#include<conio.h>
using namespace std;

void del(int a[], int size, int x)
{
	int flag=0,pos;
	for(int i=0;i<size;i++)
	{
		if(a[i]==x)
		{
			flag=1;
			pos=i;
		}
	}
	if(flag==0)
	{
		cout<<"\nElement not found to delete.";
	}
	else if(flag==1)
	{
		for(int i=pos;i<size;i++)
		{
			a[i]=a[i+1];
		}
	}
}

int main()
{
	int size,val;
	cout<<"Enter the size of array: ";
	cin>>size;
	int a[size];
	cout<<"\nEnter the elements of Array: ";
	for(int i=0;i<size;i++)
	{
		cin>>a[i];
	}
	cout<<"\nEnter the element to delete: ";
	cin>>val;
	del(a,size,val);
	cout<<"\nElements of Array are: ";
	for(int i=0;i<size-1;i++)
	{
		cout<<a[i]<<"  ";
	}
	return 0;
}
