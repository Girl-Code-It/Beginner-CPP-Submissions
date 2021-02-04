//q31-Wap to find those pair of elements that has the maximum and minimum difference among all element pairs.
#include<iostream>
using namespace std;
int main()
{
	int a[100],s,i,j,d1,d2,min,max;
	cout<<"Enter the size of the array : ";
	cin>>s;
	cout<<"Enter "<<s<<" elements in the array : "<<endl;
	for(i=0;i<s;i++)
	{
		cin>>a[i];
	}
	cout<<"ARRAY : "<<endl;
	for(i=0;i<s;i++)
	{
		cout<<a[i]<<" ";
	}
	min=a[1]-a[2];
	for(i=0;i<s;i++)
	{
		for(j=i+1;j<s;j++)
		{
			d1=a[i]-a[j];
			if(d1<min)
			{
				min=d1;
			}
		}
	}
	max=a[s]-a[s-1];
	for(i=s;i>=0;i--)
	{
		for(j=i-1;j>=0;j--)
		{
			d2=a[i]-a[j];
		}
		if(d2>max)
		{
			max=d2;
		}
	}
}
