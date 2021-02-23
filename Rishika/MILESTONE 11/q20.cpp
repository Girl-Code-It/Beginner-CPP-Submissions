//q20- wap to print the smallest and largest elements in an array.
#include<iostream>
using namespace std;
int main()
{
	int a[100]={1,45,2,-9,77,5};
	int max,min,i;
	cout<<"The array is = "<<endl;
	for(i=0;i<6;i++)
	{
		cout<<a[i]<<" ";
	}
	max=a[1];
	for(i=0;i<6;i++)
	{  
	    if(a[i]>=max)
	    max=a[i];
	}
	cout<<endl<<"Maximum element is = "<<max<<endl;
	min=a[5];
	for(i=5;i>=0;i--)
	{
		if(a[i]<=min)
		min=a[i];
	}
	cout<<endl<<"Minimum element is = "<<min;
}
