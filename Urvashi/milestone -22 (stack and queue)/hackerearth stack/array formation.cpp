#include<bits/stdc++.h>
using namespace std;

bool isprime(int n)
{
if(n<=1)
return false;
if(n<=3)
return true;
if(n%2==0||n%3==0)
return false;

for(int i=5;i*i<=n;i+=6)
{
if(n%i==0||n%(i+2)==0)
return false;
}
return true;
}

int main()
{
ios_base::sync_with_stdio(false);
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
cin>>a[i];
stack<int> s;
queue<int> q;

for(int i=0;i<n;i++)
{
if(isprime(a[i]))
q.push(a[i]);
else
s.push(a[i]);
}
while(!q.empty())
{
cout<<q.front()<<" ";
q.pop();
}
cout<<endl;
while(!s.empty())
{
cout<<s.top()<<" ";
s.pop();
}
cout<<endl;
}
