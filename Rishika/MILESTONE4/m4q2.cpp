//q2- wap to find all factors of a number.
#include<iostream>
using namespace std;
int main()
{
	int n,i;
	cout<<"Enter a number- ";
	cin>>n;
	cout<<"Factors of "<<n<<" are= ";
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			cout<<i<<", ";
		}
	}
}
