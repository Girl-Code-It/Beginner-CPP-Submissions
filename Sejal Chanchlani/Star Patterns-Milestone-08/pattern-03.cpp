//pattern-03.
#include<iostream>
using namespace std;
int main()
{
	int n,k;
	cout<<"enter number of rows and columns"<<endl;
	cin>>n;
	int j=0;
	for(int i=0;i<n;i++)
	{
		k=i;
		while(k)
		{
			cout<<" ";
			k--;
		}
		for(int j=0;j<(n-i);j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
}
