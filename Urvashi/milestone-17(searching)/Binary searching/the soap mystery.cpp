#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,m, q,i;
	int a[1000000000];
	cin>>n;
	for(i=0;i<n;i++)
	cin>>a[i];
	cin>>q;
	while(q--)
	{
		int sum=0;
		cin>>m;
		for(int i=0;a[i]!=m;i++)
		{
			sum=sum+a[i];
		}
		cout<<sum<<endl;
	}
}
