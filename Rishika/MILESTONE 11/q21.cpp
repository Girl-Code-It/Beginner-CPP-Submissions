//q21- wap to check if elements in the array are same, read from front to back and vice-versa.
#include<iostream>
using namespace std;
int main()
{
	int s,a[100],i,j,x,y;
	cout<<"Enter the size of array = ";
	cin>>s;
	cout<<"Enter "<<s<<" elements in the array = ";
	for(i=0;i<s;i++)
	{
		cin>>a[i];
	}
	cout<<endl<<" The array is : "<<endl;
	for(i=0;i<s;i++)
	{
		cout<<a[i]<<" ";
		x=a[i];
	}
	for(j=s/2;j>=0;j--)
	{
		y=a[j];
		}
		if(x==y)
		{
			cout<<endl<<"Elements are same from front to back. ";
		}else
		{
			cout<<endl<<"Elements are not same from front to back.";
		}
				
}
