//q16- wap to print the total number of duplicate elements in an array.
#include<iostream>
#define max_size 100
using namespace std;
int main()
{
	int a[max_size],s,i,j,sum=0;
	cout<<"Enter the size of the array = ";
	cin>>s;
	cout<<"Enter "<<s<<" elements in the array = ";
	for(i=0;i<s;i++)
	{
		cin>>a[i];
	}
	cout<<endl<<"The array is = "<<endl;
	for(i=0;i<s;i++)
	{
		cout<<a[i]<<" ";
	}
	for(i=0;i<s;i++)
	{
		for(j=i+1;j<s;j++)
		{
			if(a[i]==a[j])
			sum++;
		}
	}
	cout<<endl<<"Total number of duplicate elements are = "<<sum;
}
