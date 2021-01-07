//num-pattern-17
#include<iostream>
using namespace std;
int main()
{
	int n,k1,k2,p;
	cout<<"enter rows"<<endl;
	cin>>n;
	
	for(int i=1;i<=n;i++)
	{
		k1=1;
	k2=2;
		for(int j=1;j<=i;j++)
		{
			if(i%2==0)
			{
				cout<<k2;
				k2=k2+2;
			}
			else{
				cout<<k1;
				k1=k1+2;
			}
		}
		cout<<endl;
	}}
