//problem-24-11
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
	int ele,count=0;
	cout<<"enter element "<<endl;
	cin>>ele;
	for(int i=0;i<n;i++)
	{
		if(ele==arr[i])
		{
			cout<<"element found at "<<i<<"th position"<<endl;
			count=1;
			break;
		}
	}
	if(count==0)
	{
		cout<<"element not found"<<endl;
	}
}
