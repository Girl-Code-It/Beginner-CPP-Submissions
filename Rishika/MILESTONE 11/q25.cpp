//q25- wap to put even and odd elements of an array into two different arrays.
#include<iostream>
using namespace std;
int main()
{
	int a[10]={1,2,3,4,5,6,7,8,9,10},e[10],o[10];
	int i,j=0;
	cout<<"Array : "<<endl;
	for(i=0;i<10;i++)
	{
		cout<<a[i]<<" ";
	}
	for(i=0;i<10;i++)
	{
		if(a[i]%2==0)
		{
		e[j]=a[i];
		j++;
		}
	}
	for(i=0;i<10;i++)
	{
		if(a[i]%2!=0)
		{
		o[j]=a[i];
		j++;
		}
	}
	cout<<endl<<"Array for even elements : "<<endl;
	for(i=0;i<5;i++)
	{
		cout<<e[i]<<" ";
	}
	cout<<endl<<"Array for odd elements : "<<endl;
	for(i=5;i<10;i++)
	{
		cout<<o[i]<<" ";
	}
}
