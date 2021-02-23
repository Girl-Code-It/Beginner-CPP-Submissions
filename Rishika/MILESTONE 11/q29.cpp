//q29-wap to print all unique elements in the array.
#include<iostream>
using namespace std;
int main()
{
	int a[100];
	int i,j,s,size=1;
	cout<<"Enter the size of the array : ";
	cin>>s;
	cout<<"Enter "<<s<<" elements in the array : "<<endl;
	for(i=0;i<s;i++)
	{
		cin>>a[i];
	}
	cout<<endl<<"Array : "<<endl;
	for(i=0;i<s;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl<<"Result : "<<endl;
	for(i=0;i<s;i++)
	{
		for(j=i+1;j<s;j++)
		{
			if(a[i]==a[j])
			{
				cout<<" ";
			}else
			{
				cout<<a[i];
			}
		}
	}
}
