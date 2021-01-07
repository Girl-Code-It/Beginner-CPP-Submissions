//problem-07-11
#include<iostream>
using namespace std;
int main()
{
	int arr[10],brr[5];
	for(int i=0;i<10;i++)
	{
		cin>>arr[i];
	}
	int j=5;
	for(int i=0;i<5;i++)
	{
		brr[i]=arr[j];
		j++;
	}
	for(int i=0;i<5;i++)
	{
		cout<<brr[i]<<' ';
	}
}
