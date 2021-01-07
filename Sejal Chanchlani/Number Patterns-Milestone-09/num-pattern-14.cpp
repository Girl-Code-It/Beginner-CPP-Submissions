//num-pattern-14
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
		for(int j=1;j<=n;j++)
		{
			if(j<=(n+1)-i)
			{
				cout<<k<<" ";
			}
			else{
				cout<<" ";
			}
		}
		cout<<endl;
		k++;
	}}
