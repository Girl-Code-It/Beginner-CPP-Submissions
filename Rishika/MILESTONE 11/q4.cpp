//q4-take 10 int inputs in ana array and copy them in another array in reversed order.
#include<iostream>
using namespace std;
int main()
{
	int a[10],b[10];
	int i,j=0;
	cout<<"Enter 10 elements in the array : "<<endl;
	for(i=0;i<10;i++)
	{
		cin>>a[i];
	}
	cout<<"Array : "<<endl;
	for(i=0;i<10;i++)
	{
		cout<<a[i]<<" ";
	}
	for(i=9;i>=0;i--)
	{
		b[j]=a[i];
		j++;
	}
	cout<<endl<<"Reversed array : "<<endl;
	for(i=0;i<10;i++)
	{
		cout<<b[i]<<" ";
	}
}

