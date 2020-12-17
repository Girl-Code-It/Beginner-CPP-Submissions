//problem-06-11
#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter array size"<<endl;
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
	int count=0,j=n-1;
	for(int i=0;i<=n/2;i++)
	{
		if(arr[i]!=arr[j])
		{
			count=1;
			break;
		}
		else{
			j--;
		}
	}
	if(count==0)
	{
		cout<<"Same elements from both ends";
	}
}
