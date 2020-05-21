#include<iostream>
using namespace std;
int main()
{int t,q,a[100],b[100],s,i,j;
cin>>t;
for(i=0;i<t;i++)
cin>>a[i];
cin>>q;
for(i=0;i<q;i++)
cin>>b[i];
for(i=0;i<q;i++)
{s=0;
for(j=0;j<t;j++)
{s+=a[j];
{if(s>=b[i])
{cout<<j+1<<endl;
break;}
}}
if(s<b[i])
    cout<<"-1"<<endl;
}
return 0;}
