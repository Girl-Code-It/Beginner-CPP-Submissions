//problem-19-11
#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter size "<<endl;
	cin>>n;
	int arr[n],brr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		brr[i]=-1;
	}
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	int count;
	for(int i=0;i<n;i++)
	{
		count=1;
		for(int j=i+1;j<n;j++)
		{
			if(arr[i]==arr[j])
			{
				count=count+1;
				brr[j]=0;
			}
		}
		if(brr[i]!=0)
		{
			brr[i]=count;
		}
	}
	for(int i=0;i<n;i++)
	{
		if(brr[i]!=0)
		{
			cout<<arr[i]<<" occurred "<<brr[i]<<" times"<<endl;
		}
	}
}
