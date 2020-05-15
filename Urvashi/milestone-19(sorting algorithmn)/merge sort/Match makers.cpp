#include<bits/stdc++.h>
using namespace std;
void bubblesort1(int *a,int n)
{
int i,j;
for(i=1;i<n;i++)
{
int flag=0;
for(j=0;j<n-i;j++)
{
if(a[j]>a[j+1])
{
int temp=a[j];
    a[j]=a[j+1];
    a[j+1]=temp;
	flag=1;
}
}
if (flag==0)
break;
}
}
void bubblesort2(int *a,int n)
{
int i,j;
for(i=1;i<n;i++)
{
int flag=0;
for(j=0;j<n-i;j++)
{
if(a[j]<a[j+1])
{
int temp=a[j];
    a[j]=a[j+1];
    a[j+1]=temp;
	flag=1;
}
}
if (flag==0)
break;
}
}
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
		bubblesort1(a,n);
		for(int i=0;i<n;i++)
		cin>>b[i];
		bubblesort2(b,n);
		int count=0;
		for(int i=0;i<n;i++)
		{
			if(a[i]%b[i]==0 ||b[i]%a[i]==0)
			count++;
		}
		cout<<count<<endl;
	}
}
