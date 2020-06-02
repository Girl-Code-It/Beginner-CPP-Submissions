#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long n, q, x;
	int a[100000];
	cin>>n>>q;
	for(int i=0;i<n;i++)
	cin>>a[i];
	while(q--)
	{
		int flag =0;
		cin>>x;
		for(int i=0;i<n;i++)
		{
			if(x!=a[i])
			flag =1;
		}
		if(flag==0)
		cout<<"YES"<<endl;
		else
		cout<<"NO"<<endl;
	}
}
