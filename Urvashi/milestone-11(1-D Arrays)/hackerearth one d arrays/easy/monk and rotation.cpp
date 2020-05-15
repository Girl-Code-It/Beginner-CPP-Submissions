#include <iostream>
#include<algorithm>
using namespace std;
int main()
{
std::cin.sync_with_stdio(false);
int t;
int long long n;
int long long k;

cin>>t;
for(int i=0;i<t;i++)
{
cin>>n>>k;
int a[n];
for(int i=0;i<n;i++)
{
cin>>a[i];
}

if(k>n)
k=k%n;
for(int i=0;i<n;i++)
{
cout<<a[(i+n-k)%n]<<" ";
}
cout<<"\n";

}
return 0;
}
