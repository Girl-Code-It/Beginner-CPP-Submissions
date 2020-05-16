#include <bits/stdc++.h>
using namespace std;
int main() 
{
int t;
cin>>t;
while(t--)
{
int n,i,c=0;
cin>>n;
char a[100000];
cin>>a;
for(i = 0; i<n; i++)
if(a[i] == '0')
c++;
cout<<c<<endl;
}

}
