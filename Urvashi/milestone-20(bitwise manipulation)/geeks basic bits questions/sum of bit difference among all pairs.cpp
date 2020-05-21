#include<iostream>
using namespace std;
int sumBitDifference(int *a , int n)
{
int ans=0;
for(int i=0;i<32;i++)
{
	int count=0;
	for(int j=0;j<n;j++)
	if(a[j]&(1<<i))
	count++;
	
	ans+= (count*(n-count)*2);
}
return ans;
}
int main()
{
	int t,n;
	cin>>t;
	while(t--)
	{
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
    cout<<sumBitDifference(a ,n);
	}
}
