//q14- wap to insert an element into an array.
#include<iostream>
using namespace std;
int main()
{
	int a[10]={1,2,3,4,5};
	int n,p,i;
	cout<<"Original array = "<<endl;
	for(i=0;i<4;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl<<"Enter the element to be inserted = ";
	cin>>n;
	cout<<"Enter the position for inserting the element = "<<endl;
	cin>>p;
	for(i=4;i>=p;i--)
	{
		a[i+1]=a[i];
	}
	a[p]=n;
	cout<<endl<<"Final array = "<<endl;
	for(i=0;i<5;i++)
	{
		cout<<a[i]<<" ";
	}	
}
