#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int n,k,count=0;
	cin>>n;
	int a[n];

	for(int i=0;i<n;i++)
	 cin>>a[i];

	cin>>k;
	
	sort(a,a+n);

	for(int i=0;i<n;i++)
	{	count=0;
		for(int j=i; j<n;j++)
		{
			if(a[i]==a[j])
			count++;
		}
		if(count==k)
		{	cout<<a[i];
			break;
		}	
	}
}
