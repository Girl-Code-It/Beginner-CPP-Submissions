#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n , m ,k,x,count;
	cin>>n>>m>>k;
	int a[n];
	for(int i=0;i<m;i++)
	{
		cin>>a[i];
	}
	sort(a,a+m);
	for(int i=0;i<m-1;i++)
	{
		count=0;
		for(int j=0;j<m;j++)
		{
			if(a[i]==a[j])
			count++;}
		}
		if(count>k)
		x=count-k;
	cout<<x<<endl;
}
