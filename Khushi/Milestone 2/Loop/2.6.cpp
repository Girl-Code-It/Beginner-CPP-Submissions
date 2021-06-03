#include<iostream>
using namespace std;
int main()
{
	int n, i=1, sum=0;
	cin>>n;
	for(i=1; i<=n; i++)
	{
		sum += i;
	}
	
	cout<<sum;
	return 0;
}
