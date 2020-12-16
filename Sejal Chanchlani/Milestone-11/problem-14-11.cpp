//problem-14-11
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
	int max,sec_max=arr[0];
	max=arr[0];
	for(int i=0;i<n;i++)
	{
		if(max<=arr[i])
		{
			max=arr[i];
		}
	}
	for(int i=0;i<n;i++)
	{
		if(arr[i]<max && sec_max<arr[i])
		{
			sec_max=arr[i];
		}
	}
	cout<<"Second largest number "<<sec_max<<endl;
}
