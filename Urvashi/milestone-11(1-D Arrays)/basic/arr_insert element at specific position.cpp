#include<iostream>
using namespace std;
int main()
{
	int array[100], i,size, n, pos;
	cout<<"enter the size of the array:";
	cin>>size;
	cout<<"enter the elements in the array:"<<endl;
	for(i=0;i<size;i++)
	{
		cin>>array[i];
	}
	cout<<"enter the element to insert:"<<endl;
	cin>>n;
	cout<<"enter the position where the element is to be inserted: "<<endl;
	cin>>pos;
	for(i=size;i>=pos;i--)
	{
		array[i]=array[i-1];
	}
	array[pos-1]=n;
	size++;
	for(i=0;i<size;i++)
	{
	cout<<array[i]<<" ";
	}
}
