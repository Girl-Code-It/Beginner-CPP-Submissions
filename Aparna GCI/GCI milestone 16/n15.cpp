#include<iostream>
using namespace std;
int main()
{
	int n,q,i,j,f;
	cin>>n>>q;
	char a[n],b[n];
	cin>>a>>b;
	while(q--)
	{
		f=0;
		cin>>i;
		b[i-1]='1';
		cout<<b<<endl;
		for(j=0;j<n;j++)
		{
			if(b[j]<a[j])
			{
				f=1;
				break;
			}
			cout<<f<<" ";
		}
		if(f==0)
		{
			cout<<"YES"<<endl;
		}
		else if(f==1)
		{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}
