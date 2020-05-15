#include<iostream>
using namespace std;
int main()
{
	int array[100], i,size, pos;
	cout<<"enter the size of the array:";
	cin>>size;
	cout<<"enter the elements in the array:"<<endl;
	for(i=0;i<size;i++)
	{
		cin>>array[i];
	}
	cout<<"enter the position from where the element is to be deleted: "<<endl;
	cin>>pos;
	for(i=pos-1;i<size;i++)
	{
		array[i]=array[i+1];
	}
	size--;
		for(i=0;i<size;i++)
	{
	cout<<array[i]<<" ";
	}
}
