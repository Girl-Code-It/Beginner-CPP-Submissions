//pattern-14
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
		for(int j=1;j<=(n+1)-i;j++)
		{
			cout<<k<<" ";
			k--;
		}
		cout<<endl;
	}
	
}
