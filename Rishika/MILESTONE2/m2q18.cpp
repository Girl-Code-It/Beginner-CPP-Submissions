//q18- wap to find the sum of all natural numbers from 1 to n.
#include<iostream>
using namespace std;
int main()
{
	int n,i,s=0;
	cout<<"enter the upper limit = ";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		s=s+i;
	}
	cout<<"the sum of natural numbers from 1 to "<<n<<"is= "<<s;
}
