//problem-25-11
#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter array size"<<endl;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	int temp,max;
	for(int i=0;i<n;i++)
	{
		
		for(int j=i+1;j<n;j++)
		{
			if(arr[i]>arr[j])
			{
				temp=arr[j];
				arr[j]=arr[i];
				arr[i]=temp;
			}
		}
	}
	cout<<"after sorying in ascending order - "<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	cout<<"after sorying in decending order - "<<endl;
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(arr[i]<arr[j])
			{
				temp=arr[j];
				arr[j]=arr[i];
				arr[i]=temp;
			}
		}
	}
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	
}
