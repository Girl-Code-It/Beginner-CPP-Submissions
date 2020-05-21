#include<bits/stdc++.h>
using namespace std;

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n;
cin>>n;
long long int a[n];
for(int i=0;i<n;i++)
cin>>a[i];

for(int i=0;i<n;i++)
{
int flag=0;
int k;

for(int j=i+1;j<n;j++)
{
if(a[i]<a[j])
{
k=j;
flag=1;
break;
}
}
if(flag==1)
{
flag=0;
for(int l=k+1;l<n;l++)
{
if(a[k]>a[l])
{
cout<<a[l]<<" ";
flag=1;
break;
}
}
}
if(flag==0)
{
cout<<-1<<" ";
}
}
}
