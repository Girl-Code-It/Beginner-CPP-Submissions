//problem-08-11
#include<iostream>
using namespace std;
int main()
{
	int n,sum=0,prod=1,max,min;
	cout<<"enter size of array"<<endl;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		sum=sum+arr[i];
		prod=prod*arr[i];
	}
	max=arr[0];
	min=arr[0];
	for(int i=0;i<n;i++)
	{
		if(max<=arr[i])
		{
			max=arr[i];
		}
		if(min>=arr[i])
		{
			min=arr[i];
		}
	}
	cout<<"sum = "<<sum<<endl;
	cout<<"product = "<<prod<<endl;
	cout<<"average = "<<sum/n<<endl;
	cout<<"maximum = "<<max<<endl;
	cout<<"minimum = "<<min;
}
