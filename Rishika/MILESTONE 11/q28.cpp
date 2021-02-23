//q28-wap to delete duplicate elements from the array.
#include<iostream>
using namespace std;
int main()
{
	int a[100];
	int i,j,k,s;
	cout<<"Enter size of the array : ";
	cin>>s;
	cout<<endl<<"Enter "<<s<<" elements in the array : "<<endl;
	for(i=0;i<s;i++)
	{
		cin>>a[i];
	}
	cout<<endl<<"Array : "<<endl;
	for(i=0;i<s;i++)
	{
		cout<<a[i]<<" ";
	}
	for(i=0;i<s;i++)
	{
		for(j=i+1;j<s;j++)
		{
			if(a[i]==a[j])
			{
				for(k=j;k<s;k++)
				{
					a[k]=a[k+1];
				}
				s--;
			}
		}
	}
	cout<<endl<<"Final array : "<<endl;
	for(i=0;i<s;i++)
	{
		cout<<a[i]<<" ";
	}
}
