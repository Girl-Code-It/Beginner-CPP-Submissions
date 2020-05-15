#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		int a[n],b[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		sort(&a[0],&a[n]);
		for(int i=0;i<n;i++)
		cin>>b[i];
	    sort(&b[0],&b[n]);
		int count=0;
		for(int i=0,j=n-1;i<n;i++,j--)
		{
			int x=(a[i]>b[j])?a[i]:b[j];
			int y=(a[i]<b[j])?a[i]:b[j];
			if(x%y==0)
			count++;
		}
		cout<<count<<endl;
	}
}
