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
	int pos;
	cout<<"enter postion"<<endl;
	cin>>pos;
	for(int i=pos-1;i<n-1;i++)
	{
	arr[i]=arr[i+1];
}
for(int i=0;i<n-1;i++)
{
	cout<<arr[i]<<" ";
}
}
