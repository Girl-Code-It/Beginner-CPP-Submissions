//q15-wap to print reverse of an array.
#include<iostream>
#define max_size 100
using namespace std;
int main()
{
	int arr[max_size],size,i;
	cout<<"Enter the size of the array = "<<endl;
	cin>>size;
	for(i=0;i<size;i++)
	{
		cout<<"Enter an element = ";
		cin>>arr[i];
	}
	cout<<"The array is = "<<endl;
	for(i=0;i<size;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl<<"Reverse of the array is - "<<endl;
	for(i=size-1;i>=0;i--)
	{
		cout<<arr[i]<<" ";
	}
}
