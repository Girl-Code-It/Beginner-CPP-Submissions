#include<bits/stdc++.h>
using namespace std;
 
int main()
{ std::ios::sync_with_stdio(false);
int t;
cin>>t;
while(t--)
{
int n,k;
cin>>n>>k;
 
int a[n],min=10e9;
for(int i=0;i<n;i++)
{
cin>>a[i];
if(a[i]<min)
min=a[i];
}
if(min<k)
cout<<k-min<<endl;
else
cout<<"0"<<endl;
}
}
