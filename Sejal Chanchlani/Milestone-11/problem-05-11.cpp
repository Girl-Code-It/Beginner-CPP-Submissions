//problem-05-11
#include<iostream>
using namespace std;
int main()
{
	int n,max,min;
	cout<<"enter array size"<<endl;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cout<<"enter "<<i<<" th element"<<endl;
		cin>>arr[i];
	}
	max=arr[0],min=arr[0];
	for(int i=0;i<n;i++)
	{
		if(max<=arr[i])
		{
			max=arr[i];
		}
	}
	cout<<"Maximum element - "<<max<<endl;
	for(int i=0;i<n;i++)
	{
		if(min>=arr[i])
		{
			min=arr[i];
		}
	}
	cout<<"Minimum element - "<<min<<endl;
}
