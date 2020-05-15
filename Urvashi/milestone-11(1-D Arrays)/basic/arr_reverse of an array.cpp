#include<iostream>
using namespace std;
int main()
{
	int  i, size ,a[100];
	cout<<"enter the size of the array:"<<endl;
	cin>>size;
	cout<<"enter the elements on the array:";
	for(i=0; i<size;i++)
	{
		cin>>a[i];
}
cout<<"reverse of the given array is="<<endl;
for(i=size-1;i>=0;i--)
{
	cout<<a[i]<<" ";
}
}
