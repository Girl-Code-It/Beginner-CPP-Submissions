//pattern-06.
#include<iostream>
using namespace std;
int main()
{
	int n,k;
	cout<<"Enter number of rows"<<endl;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		k=n-i;
		while(k)
		{
			cout<<" ";
			k--;
		}
		for(int j=1;j<=i;j++)
		{
			cout<<"* ";
		}
		cout<<endl;
	}
}
