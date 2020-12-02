//num-pattern-11
#include<iostream>
using namespace std;
int main()
{
	int n,m;
	cout<<"enter rows"<<endl;
	cin>>n;
	cout<<"enter columns"<<endl;
	cin>>m;
	for(int i=m;i>=1;i-=2)
	{
		for(int j=1;j<=i;j++)
		{
			cout<<j<<" ";
		}
		cout<<endl;
	}
}
