#include<iostream>
using namespace std;
int main()
{
	int i, j, m ;
	cout<<"enter the rows :";
	cin>>m;
	cout<<"*\n";
	for(i=1;i<=m;i++)
	{ cout<<"*";
		for(j=1;j<=i;j++)
		{	cout<<j;	}
			for(j=i-1;j>=1;j--)
			{	cout<<j; }
			cout<<"*";
			cout<<"\n";}
			for(i=m-1;i>=1;i--)
		{   cout<<"*";
			for(j=1;j<=i;j++)
			{	cout<<j;	}
			for(j=i-1;j>=1;j--)
			{ 	cout<<j;}
			cout<<"*";
			
			cout<<"\n";	}
			cout<<"*";
	}
