//Q7- wap to print negative elements of an array..
#include<iostream>
using namespace std;
int read(int arr[])
{
	for(int i=0;i<5;i++)
	{
		cout<<"Enter a number(+ve or -ve) = ";
		cin>>arr[i];
	}
}
void print(int arr[])
{
	for(int i=0;i<5;i++)
	{
		if(arr[i]<0)
		cout<<arr[i]<<endl;
	}
}
int main()
{
	int array[5];
	read(array);
	cout<<"Negative elements of the array are : ";
	print(array);
}

