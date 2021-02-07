//q27- wap to right or left rotate an array.
#include<iostream>
using namespace std;
int swap(int a[5])
{
	int i;
	for(i=0;i<5;i++)
	{
		{
			a[i]=a[i+1];
		}
	}
	cout<<a[i]<<" ";	
}
int main()
{
	int a[5]={1,2,3,4,5};
	int i;
	cout<<"Array : "<<endl;
	for(i=0;i<5;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl<<"Left rotated 3 times : "<<endl;
	for(i=0;i<5;i++)
	{
		swap(a);
	}
}
