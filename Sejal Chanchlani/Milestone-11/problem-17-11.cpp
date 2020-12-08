//problem-15-11
#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter size"<<endl;
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
	int pos,x;
	cout<<"enter element to be inserted "<<endl;
	cin>>x;
	cout<<"enter the position "<<endl;
	cin>>pos;
	for(int i=n;i>=n-pos;i--)
	{
	    arr[i]=arr[i-1];
	}
	arr[pos]=x;
	for(int i=0;i<n+1;i++)
	{
		cout<<arr[i]<<" ";
	}

}
