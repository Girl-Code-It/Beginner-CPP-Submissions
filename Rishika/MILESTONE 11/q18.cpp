//q18- wap to delete an element from an array from a specefic position.
#include<iostream>
using namespace std;
int main()
{
	int a[100]={1,2,3,4,5};
	int p,i;
	cout<<"Initial array = ";
	for(i=0;i<4;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl<<"Enter the position from where element must be deleted = ";
	cin>>p;
	for(i=p;i<5;i++)
	{
		a[i]=a[i+1];
	}
	cout<<"Final array = "<<endl;
	for(i=0;i<3;i++)
	{
		cout<<a[i]<<" ";
	}
}
