#include <iostream>
using namespace std;

int main()
{
int t;

cin >>t;
while (t--)
{ 
int n;
int count=0;
cin>>n;
for (int i=1;i<=n;i++)
{
for (int j=i;j<=n;j++)
{
if ((i^j) <= n && i!=j) 
count++;
}
}
cout <<count <<endl;
}
}
