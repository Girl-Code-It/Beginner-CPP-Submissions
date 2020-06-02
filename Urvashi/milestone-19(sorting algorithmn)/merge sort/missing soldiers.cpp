#include<iostream>
using namespace std;

int main()
{
	std::cin.sync_with_stdio(false);
	long int n;
	cin>>n;
	long long int x[n],y[n],d[n];
	long int count=0;
	for(int i=0;i<n;i++)
	{
    cin>>x[i]>>y[i]>>d[i];
	}
	for(int i=0;i<n;i++)
	{
		for(int j=x[i];j<=x[i]+d[i];j++)
		{
			count++;
		}
	}
	cout<<count<<endl;
}
