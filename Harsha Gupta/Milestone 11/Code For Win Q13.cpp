//Count total duplicate elements in array

#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	int size,c,ans=0;
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
		c=1;
		for(int j=i+1;j<size;j++)
		{
			if(a[i]==a[j])
			{
				c++;
		    }
		}
		if(c>1)
			ans++;
	}
	cout<<"\nTotal no. of duplicate elements in array: "<<ans;
	return 0;
}
