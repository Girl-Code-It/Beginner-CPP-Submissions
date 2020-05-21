#include <bits/stdc++.h>
using namespace std;
int main() 
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

long long n,k,ans=0;
cin>>n>>k;
long long a[n];
for(int i=0;i<n;i++)
{
cin>>a[i];
ans=max(a[i],ans);
}

if (k == n || (n == 1 && k % 2 == 1))
cout<<-1;

else if (k>n+1)
cout<<ans;

else
{
for (int i= 0;i<k-1;i++)
ans=max(ans,a[i]);
cout<<max(a[k],ans);
}
}
