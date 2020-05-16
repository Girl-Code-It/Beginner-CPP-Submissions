#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n, m;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sort(a,a+n);
	cin>>m;
	int b[m];
	for(int i=0;i<m;i++)
	{
		cin>>b[i];
	}
	sort(b,b+m);
	int sum=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]<b[m-1])
		sum+=b[m-1]+1-a[i];
	}
    cout<<sum<<endl;
}
