#include<iostream>
using namespace std;

unsigned int count_setbits(unsigned long long int n)
{
	unsigned count=0;
	while(n)
	{
		count+=n&1;
		n>>=1;
	}
	return count;
	
}
int main()
{
	unsigned long long int n;
	cin>>n;
	int ans=count_setbits(n);
	cout<<ans<<endl;
}
