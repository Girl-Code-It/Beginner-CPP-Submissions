//problem-22-11
#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter array size "<<endl;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(int i=0;i<n;i++)
	{
		cout<<arr[i];
	}
	cout<<endl;
	int even[n/2],odd[n/2];
	int j=0,k=0;
	int count_even=0,count_odd=0;
	for(int i=0;i<n;i++)
	{
		if(arr[i]%2==0)
		{
			even[j]=arr[i];
			count_even++;
			j++;
		}
		else{
			odd[k]=arr[i];
			count_odd++;
			k++;
		}
	
	}
	cout<<"count of even- "<<count_even<<endl;
	
	cout<<"printing even array - "<<endl;

	for(int i=0;i<count_even;i++)
	{
		cout<<even[i]<<" ";
	}
	cout<<endl;
		cout<<"printing odd array - "<<endl;
	for(int i=0;i<count_odd;i++)
	{
		cout<<odd[i]<<" ";
	}
	
}

