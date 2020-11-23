//pattern -02
#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter number of rows and columns"<<endl;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=(n-i);j++)
		{
			cout<<" ";
		}
		for(int k=1;k<=i;k++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
}
