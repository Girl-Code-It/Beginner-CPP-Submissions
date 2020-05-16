#include<iostream>
#include<stdlib.h>
using namespace std;
void merge(int *c,int n,int m)
{
	int i=0,j=0,k=0;
	int *a=new int[n];
	int *b=new int[m];
	for(int i=0;i<n;i++)
	cin>>a[i];
	for(int i=0;i<m;i++)
	cin>>b[i];
	while(i<n&&j<m)
	{
		if(a[i]>=b[j])
		{
			c[k]=a[i];
			i++;
		}
		else
		{
			c[k]=b[j];
			j++;
		}
		k++;
	}
		while(i<n)
		{
			c[k]=a[i];
			i++;
			k++;
		}
		while(j<m)
		{
			c[k]=b[j];
			j++;
			k++;
		}
		delete a;
		delete b;
}
int main()
{
	int t,n,m;
	cin>>t;
	while(t--)
	{
		cin>>n>>m;
	    int c[m+n];
	    merge(c,n,m);
		for(int i=0;i<n+m;i++)
		cout<<c[i]<<" ";
        cout<<endl;
	} 
}
