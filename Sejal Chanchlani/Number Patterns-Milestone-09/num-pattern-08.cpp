//num-pattern-08
#include<iostream>
using namespace std;
int main()
{
	int n,k,p;
	cout<<"enter rows"<<endl;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		k=n;
		for(int j=1;j<=i;j++)
		{
			cout<<k<<" ";
			k--;
		}
		cout<<endl;
	}
}
