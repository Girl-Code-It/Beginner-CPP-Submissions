//q24-Take an array of 10 elements. Split it into middle and store the elements in two dfferent arrays.
#include<iostream>
using namespace std;
int main()
{
	int a[10]={58,24,13,15,63,9,8,81,1,78},b[5],c[5];
	int i,j=0,k=0;
	cout<<" Array : "<<endl;
	for(i=0;i<10;i++)
	{
		cout<<" "<<a[i]<<" ";
	}
	cout<<endl<<" Sub-Arrays : "<<endl;
	for(i=0;i<5;i++)
	{
		b[j]=a[i];
		j++;
	}
	for(j=0;j<5;j++)
	{
		cout<<" "<<b[j]<<"  ";
	}
	for(i=5;i<10;i++)
	{
		c[k]=a[i];
		k++;
	}cout<<endl;
	for(k=0;k<5;k++)
	{
		cout<<"  "<<c[k]<<"   ";
	}
	
}
