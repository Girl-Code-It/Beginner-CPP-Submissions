//problem-10-11
#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter size of array"<<endl;
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
	int temp=arr[n-1];
	for(int i=n-1;i>=0;i--)
	{
		arr[i]=arr[i-1];
	}
	arr[0]=temp;
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}
