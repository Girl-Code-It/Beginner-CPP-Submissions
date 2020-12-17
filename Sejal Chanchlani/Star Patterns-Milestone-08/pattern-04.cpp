//pattern-04
#include<iostream>
using namespace std;
int main()
{
	int n,k;
	cout<<"enter number of rows and columns"<<endl;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<(n-i);j++)
		{
			cout<<"*";
		}
		k=i;
		while(k)
		{
			cout<<" ";
			k--;
		}
		cout<<endl;
	}
}
