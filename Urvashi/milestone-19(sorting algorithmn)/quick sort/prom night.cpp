#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n, m ;
	
		cin>>m>>n;
		int boy[m],girl[n];
		int count=0;
		for(int i=0;i<m;i++)
		{
			cin>>boy[i];
		}
		sort(boy,boy+m);
		for(int i=0;i<n;i++)
		{
			cin>>girl[i];
		}
		sort(girl,girl+n);
		if(m>n)
		cout<<"NO\n";
		else
		{
			for(int i=0;i<n;i++)
			{
				if(boy[i]<=girl[i])
				count++;
			}
			if(count==0)
			cout<<"YES\n";
			else
			cout<<"NO\n";
		}
	}
}
