//problem-03-11
#include<iostream>
using namespace std;
int main()
{
	int arr[10],brr[10];
	for(int i=0;i<10;i++)
	{
		cout<<"enter "<<i<<"th element"<<endl;
		cin>>arr[i];
	}
		for(int i=0;i<10;i++)
	{
		
		cout<<arr[i]<<endl;
	}
	int j=9;
	for(int i=0;i<10;i++)
	{
		brr[i]=arr[j];
		j--;
	}
	for(int i=0;i<10;i++)
	{
		cout<<brr[i]<<endl;
	}
}
