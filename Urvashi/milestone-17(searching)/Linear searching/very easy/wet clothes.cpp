#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,m,g;
cin>>n>>m>>g;
int t[n],a[m];
for(int i=0;i<n;i++)
cin>>t[i];
for(int i=0;i<m;i++)
cin>>a[i];
int max=-1;
int noOfclothes=0;
for(int i=0;i<n-1;i++)
{
if(t[i+1]-t[i]>=max)
max=t[i+1]-t[i];
}
for(int i=0;i<m;i++)
if(a[i]<=max)
noOfclothes++;
cout<<noOfclothes;
}
