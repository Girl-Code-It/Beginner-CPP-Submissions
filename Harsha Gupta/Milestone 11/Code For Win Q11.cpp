//Count frequency of each element in array

#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	int size,c;
	cout<<"Enter the size of array: ";
	cin>>size;
	int a[size];
	int freq[size];
	cout<<"\nEnter the elements of Array: ";
	for(int i=0;i<size;i++)
	{
		cin>>a[i];
		freq[i]=-1;
	}
	for(int i=0;i<size;i++)
	{
		c=1;
		for(int j=i+1;j<size;j++)
		{
			if(a[i]==a[j])
			{
				c++;
				freq[j]=0;
		    }
		}
		if(freq[i]!=0)
			freq[i]=c;
	}
	for(int k=0;k<size;k++)
	{
		if(freq[k]!=0)
		{
			cout<<"Frequency of "<<a[k]<<" is "<<freq[k]<<endl;
	    }
	}
	return 0;
}
