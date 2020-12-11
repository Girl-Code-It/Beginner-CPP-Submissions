//problem-23-11
#include<iostream>
using namespace std;
int main()
{
	int n,temp,j;
	cout<<"enter size"<<endl;
	cin>>n;
	j=n-1;
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
	for(int i=0;i<n/2;i++)
	{
		temp=arr[j];
		arr[j]=arr[i];
		arr[i]=temp;
		j--;
	}
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}
