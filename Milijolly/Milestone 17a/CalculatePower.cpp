//program to calculate the power of any number using recursion
#include <bits/stdc++.h>
using namespace std;

int calcpower(int x,int n)
{
	if(n==0)
		return 1;
	if(n%2==0)
	{
		int y= calcpower(x,n/2);
		return y * y;
	}
	
	return x * calcpower(x,n-1);
}

int main()
{
	int x,n;
	cin>>x>>n;
	cout<<calcpower(x,n);
}
