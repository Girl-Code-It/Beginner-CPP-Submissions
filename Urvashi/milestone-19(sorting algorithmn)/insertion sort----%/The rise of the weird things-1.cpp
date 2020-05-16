#include<iostream>
using namespace std;
void inserton_sort(int *a,int n)
{
	for(int i=1;i<n;i++)
	{
		int hole=i;
		int value=a[i];
		while(hole>0&&a[hole-1]>value)
		{
			a[hole]=a[hole-1];
			hole--;
		}
		a[hole]=value;
	}
}
int main()
{
	int n,zombies=0,vampires=0,k=0,m=0;
	cin>>n;
	int a[n],b[n],c[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	inserton_sort(a,n);
	for(int i=0;i<n;i++)
	{
		if(a[i]%2==0)
	{
		zombies+=a[i];
		b[k]=a[i];
		k++;
	}
		else
		{
		vampires+=a[i];
		c[m]=a[i];
		m++;
	}
	}
	for(int i=0;i<k;i++)
	{
		cout<<b[i]<<" ";
	}
	cout<<zombies<<" ";
	
	for(int i=0;i<m;i++)
	{
		cout<<c[i]<<" ";
	}
	cout<<vampires<<" ";
}
