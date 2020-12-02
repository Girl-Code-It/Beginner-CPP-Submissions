//num-pttern-18
#include<iostream>
using namespace std;
int main()
{
	int n,k,p;
	cout<<"enter rows"<<endl;
	cin>>n;
	k=1;
	for(int i=1;i<=n;i++)
	{
		p=k;
		for(int j=1;j<=n;j++)
		{
			if(j<=(n+1)-i)
			{
				cout<<p<<" ";
				p=p+2;
			}
			else{
				cout<<" ";
			}
		}
		cout<<endl;
		k=k+2;
	}}
