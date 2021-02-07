//Q10-wap to find the second largest element in the array.
#include<iostream>
using namespace std;
int main()
{
	int a[10],s,i,l= -999,sl= -999;
	cout<<"Enter the size of the array : ";
	cin>>s;
	cout<<"Enter "<<s<<" elements in the array : "<<endl;
	for(i=0;i<s;i++)
	{
		cin>>a[i];
	}
	cout<<"The array is : "<<endl;
	for(i=0;i<s;i++)
	{
		cout<<a[i]<<" ";
	}
	for(i=0;i<s;i++)
	{
		if(a[i]>l)
		{
		    sl=l;
		    l=a[i];
		}
		else if(a[i]>sl)
		{
			sl=a[i];
		}
	}
	cout<<endl<<"Largest element is : "<<l;
	cout<<endl<<"Second Largest Element : "<<sl;
}

