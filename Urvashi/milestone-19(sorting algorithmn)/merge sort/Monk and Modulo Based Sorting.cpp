#include<iostream>
using namespace std;
int main()
{
int i,j,k,n;
cin>>n>>k;

int a[n];

for(i=0;i<n;i++)
{
    cin>>a[i];
}
for(i=1;i<n;i++)
{
int flag=0;
for(j=0;j<n-i;j++)
{
if(a[j]%k>a[j+1]%k)
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
for(i=0;i<n;i++)
{
cout<<a[i]<<" ";
}
}
