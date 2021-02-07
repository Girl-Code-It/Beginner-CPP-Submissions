//q26- wap to arrange elemeents of an array in ascending or descending order.
#include<iostream>
using namespace std;
int main()
{
	int a[10]={2,5,1,6,9,3,7,4,8,0};
	int i,j,temp;
	cout<<"Array : "<<endl;
	for(i=0;i<10;i++)
	{
		cout<<a[i]<<" ";
	}
	for(i=0;i<10;i++)
	{
		for(j=i+1;j<10;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	cout<<endl<<"Array in reversed order : "<<endl;
	for(i=0;i<10;i++)
	{
		cout<<a[i]<<" ";
	}
}
