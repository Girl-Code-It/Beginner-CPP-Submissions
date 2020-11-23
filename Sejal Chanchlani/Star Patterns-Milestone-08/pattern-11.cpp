//pattern-11
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
		for(int j=1;j<=i;j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	for(int i=0;i<=n2;i++)
	{
		for(int j=0;j<n2-i;j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
}
