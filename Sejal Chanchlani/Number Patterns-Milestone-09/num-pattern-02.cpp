//num-pattern-02
#include<iostream>
using namespace std;
int main()
{
	int n,p,k;
	cout<<"enter rows"<<endl;
	cin>>n;
	k=n;
	for(int i=1;i<=n;i++)
	{
		p=k;
		for(int j=1;j<=i;j++)
		{
			cout<<p<<" ";
			p++;
		}
		k--;
		cout<<endl;
	}
}
