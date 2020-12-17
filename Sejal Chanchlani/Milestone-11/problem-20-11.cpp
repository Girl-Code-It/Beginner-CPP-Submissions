//problem-20-11- unique elements in an array
#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter size "<<endl;
	cin>>n;
	int arr[n],brr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		brr[i]=-1;
	}
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	int count;
	for(int i=0;i<n;i++)
	{
		count=1;
		for(int j=i+1;j<n;j++)
		{
			if(arr[i]==arr[j])
			{
				count++;
				brr[j]=0;
			}
		}
		if(brr[i]!=0)
		{
			brr[i]=count;
		}
	}
	cout<<"unique elements are as follows - "<<endl;
	for(int i=0;i<n;i++)
	{
		if(brr[i]==1)
		{
			cout<<arr[i]<<endl;
		}
	}
}
