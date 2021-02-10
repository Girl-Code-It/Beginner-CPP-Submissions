#include<iostream>
#define max_size 100
using namespace std;
int main()
{
	int array[max_size],i,size;
	cout<<"Enter the size of the element = ";
	cin>>size;
	for(i=0;i<size;i++)
	{
		cout<<"Enter an element = ";
		cin>>array[i];
	}
	cout<<"The array is = ";
	for(i=0;i<size;i++)
	{
		cout<<array[i]<<" ";
	}
	cout<<endl<<"Reversed array ="<<endl;
	for(i=size;i>0;i++)
	{
		cout<<array[i]<<" ";
	}
}
