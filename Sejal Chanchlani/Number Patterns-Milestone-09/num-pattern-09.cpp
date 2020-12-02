//num-pattern-10
#include<iostream>
using namespace std;
int main()
{
	int n,k=1;
	cout<<" enter rows"<<endl;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
			cout<<k;
		}
		cout<<endl;
		k++;
	}
}
