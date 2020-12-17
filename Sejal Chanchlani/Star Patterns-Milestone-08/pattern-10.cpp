//pattern-10
#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter no of rows"<<endl;
	cin>>n;
	int n1,n2;
	n1=n/2;
	n2=n-n1;
	for(int i=1;i<=n1;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(j>=(n1+2)-i && j<=n1+i)
			{
				cout<<"*";
			}
			else
			{
				cout<<" ";
			}
		}
		cout<<endl;
	}
	for(int i=1;i<=n2;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(j>=i && j<=((n+1)-i))
			{
				cout<<"*";
			}
			else{
				cout<<" ";
			}
		}
		cout<<endl;
	}
}
