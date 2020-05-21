#include<iostream>
using namespace std;

void bin(unsigned n)
{
if(n>1)
bin(n/2);
cout<<(n%2);
}
int main()
{
	int t;
	cin>>t;
	unsigned n;
	while(t--)
	{
		cin>>n;
		bin(n);
	}
}
