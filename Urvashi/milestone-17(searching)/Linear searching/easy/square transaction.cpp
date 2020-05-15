#include<bits/stdc++.h>
using namespace std;
int main()
{
long long int t,q;
cin>>t;
long long int a[t];
for(int i=0;i<t;i++)
{
cin>>a[i];
}
cin>>q;
while(q--){
long long int c,s=0;
cin>>c;
for(int j=0;j<t;j++)
{
s=s+a[j];
if(s>=c)
{
cout<<j+1<<endl;
break;
}
if(j==t){
cout<<-1<<endl;
}
}}   
}
