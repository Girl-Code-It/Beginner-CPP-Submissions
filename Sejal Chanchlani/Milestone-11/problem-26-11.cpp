//problem-26-11
#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter size "<<endl;
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
	int temp,k;
	cout<<"enter how many left rotations"<<endl;
	cin>>k;
	while(k)
	{
	
	temp=arr[0];
	for(int i=0;i<n;i++)
	{
		arr[i]=arr[i+1];
	}
	arr[n-1]=temp;
	k--;
}
	cout<<"after left rotation "<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
