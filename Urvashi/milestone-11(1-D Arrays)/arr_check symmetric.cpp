#include<iostream>
using namespace std;

int main()
{
	int a[3][3], i,j, x=0, y=0;
	
	cout<<"enter the elements of the array:";
	for(i=0;i<3;i++)
	{
	for(j=0;j<3;j++)
	cin>>a[i][j];
	}	
	}
	
	for(i=0;i<3;i++)
	{
	for(j=0;j<3;j++)
	{	
	cout<<a[i][j]<<"  ";
	}
	cout<<endl;
	}
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
	{
		if(a[i][j]!=a[j][i])
		x=1;	
	}
	}
	
	if(x==0)
	cout<<"it is a symmetric matrix";
	else 
	cout<<"it is not a symmetric matrix";	}
