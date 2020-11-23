//pattern-15
#include<iostream>
using namespace std;
int main()
{
	int n,k,n1,n2,l;
	cout<<"Enter number of rows"<<endl;
	cin>>n;
	n1=n/2;
	n2=n-n1;
	for(int i=1;i<=n1;i++)
	{
		k=1;
	   for(int j=1;j<=n1-i+1;j++)
	   {
	   	cout<<" ";
	   }
	   for(int j=1;j<=i;j++)
	   {
	   	cout<<k;
	   	k++;
	   }
	   cout<<endl;
	}
	for(int i=1;i<=n2;i++)
	{
		l=1;
		for(int j=1;j<i;j++)
		{
			cout<<" ";
		}
		for(int j=1;j<=n2-i+1;j++)
		{
			cout<<l;
			l++;
		}
		cout<<endl;
	}
}

