//q22-wap to print sum, average of all numbers, smallest and largest element of an array.
#include<iostream>
using namespace std;
int main()
{
	int a[10]={1,2,3,4,5};
	int i,s=0,av,min,max;
	cout<<"For the array : "<<endl;
	for(i=0;i<5;i++)
	{
		cout<<a[i]<<" ";
	}
	max=a[1];
	for(i=0;i<5;i++)
	{
		if(a[i]>=max);
		max=a[i];
		s=s+a[i];
	}
	av=s/10;
	min=a[4];
	for(i=4;i>=0;i--)
	{
		if(a[i]<=min)
		min=a[i];
	}
	cout<<endl<<"  SUM =  "<<s<<endl;
	cout<<"  AVERAGE ( integer value ) =  "<<av<<endl;
	cout<<"  SMALLEST NUMBER =  "<<min<<endl;
	cout<<"  LARGEST NUMBER =  "<<max;
}
