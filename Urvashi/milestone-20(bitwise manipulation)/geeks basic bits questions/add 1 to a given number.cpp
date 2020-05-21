#include<iostream>
using namespace std;
unsigned int AddOne(unsigned int x)
{
return -(~x);
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		unsigned int x;
		cin>>x;
		unsigned int ans=AddOne(x);	
		cout<<ans<<endl;
	}
}
