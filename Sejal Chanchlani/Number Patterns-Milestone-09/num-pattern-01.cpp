//num-pattern-01
#include<iostream>
using namespace std;
int main()
{
	int n,k;
	cout<<"enter rows"<<endl;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		k=1;
		for(int j=1;j<=i;j++)
		{
			cout<<k<<" ";
			k++;
			
		}
		cout<<endl;
	}
}
