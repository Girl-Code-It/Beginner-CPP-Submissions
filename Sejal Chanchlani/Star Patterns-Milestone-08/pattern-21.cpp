//pattern-21
#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter no of rows"<<endl;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n-i;j++)
		{
			cout<<" ";
		}
		for(int j=1;j<=5;j++)
		{
			cout<<"*";
		}
	cout<<endl;}
}
