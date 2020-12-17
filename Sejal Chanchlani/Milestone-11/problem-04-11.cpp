//problem-04-11
#include<iostream>
using namespace std;
int main()
{
	int arr[10],sum=0,prod=1;
	for(int i=0;i<10;i++)
	{
		cout<<"enter "<<i<<"th element"<<endl;
		cin>>arr[i];
		sum=sum+arr[i];
		prod=prod*arr[i];
	}
		for(int i=0;i<10;i++)
	{
		
		cout<<arr[i]<<endl;
	}
	cout<<"Sum= "<<sum<<endl;
	cout<<"Product = "<<prod;
}
