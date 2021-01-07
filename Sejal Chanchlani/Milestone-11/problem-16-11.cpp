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
	int count=0;
	for(int i=0;i<n;i++)
	{
		if(arr[i]<0)
		{
			count=count+1;
		}
	
	}
	cout<<"Count of negative numbers"<<count<<endl;
	
}
