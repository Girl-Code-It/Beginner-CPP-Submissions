#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n , q, x1,x2,i;
	int *a= new int[n];
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cin>>q;
	while(q--)
	{
		int count=0;
		cin>>x1>>x2;
		if(x1==0)
		{
			count=0;
		for(i=0;i<n;i++)
		{
			if(a[i]>=x2)
			count++;
		}
	}
		else if(x1==1)
{
	    count=0;
		for(i=0;i<n;i++)
		{
			if(a[i]>x2)
			count++;
		}
	}
		cout<<count<<endl;
}
}
