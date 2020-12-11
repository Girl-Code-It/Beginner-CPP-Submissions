//problem-21-11
#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter size"<<endl;
	cin>>n;
	int arr[n],brr[n],crr[n+n];
	cout<<"enter elements of first array"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	cout<<"enter elements of second array"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>brr[i];
	}
	for(int i=0;i<n;i++)
	{
		cout<<brr[i]<<" ";
	}
	cout<<endl;
	int j=0;
	for(int i=0;i<n;i++)
	{
		crr[i]=arr[i];
		j++;
	}
	for(int i=0;i<n;i++)
	{
		crr[j]=brr[i];
		j++;
	}
	for(int i=0;i<n+n;i++)
	{
		cout<<crr[i]<<" ";
	}
}
