#include<bits/stdc++.h>
using namespace std;
 
int main()
{
std::cin.sync_with_stdio(false);
ios_base::sync_with_stdio(false);
cin.tie(NULL);
 
int t,n;
cin>>t;
while(t--)
{
cin>>n;
vector<pair<int,int>> v;
 
for(int i=0;i<n;i++)
{
int x;
cin>>x;
 
v.push_back({x,i});
}
 
sort(v.begin(),v.end());
int count=0;
 
for(int i=0;i<n;i++)
{
int j=v[i].second;
 
if(i%2 != j%2)
count++;
}
cout<<count/2<<endl;
}
}
