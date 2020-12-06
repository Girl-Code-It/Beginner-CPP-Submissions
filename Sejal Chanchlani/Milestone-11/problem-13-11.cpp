//problem-13-11
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
	cout<<"negative elements are - "<<endl;
	for(int i=0;i<n;i++)
	{
		if(arr[i]<0)
		{
			cout<<arr[i]<<" ";
		}
	}
}
