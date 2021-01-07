//num-pattern-15
#include<iostream>
using namespace std;
int main()
{
	int n,k,p;
	cout<<"enter rows"<<endl;
	cin>>n;
	k=n;
	for(int i=1;i<=n;i++)
	{
		p=k;
		for(int j=1;j<=n;j++)
		{
			if(j<=i)
			{
				cout<<p<<" ";
				p++;
			}
			else
			{
				cout<<"5 ";
			}
		}
		cout<<endl;
		k--;
	}
}
