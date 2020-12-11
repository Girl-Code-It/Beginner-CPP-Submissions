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
	int count_odd=0,count_even=0;
	for(int i=0;i<n;i++)
	{
		if(arr[i]%2==0)
		{
			count_even=count_even+1;
		}
		else
		{
			count_odd=count_odd+1;
		}
	}
	cout<<"Count of even numbers"<<count_even<<endl;
	cout<<"count of odd numbers "<<count_odd<<endl;
}
