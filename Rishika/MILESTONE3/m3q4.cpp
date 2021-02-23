//q-4- wap to write the sum of digits of a number.
#include<iostream>
using namespace std;
int main()
{
	int n,s;
	cout<<"enter a number= ";
	cin>>n;
	s=0;
	while(n>10)
	{
		n=n%10;
		s=s+n;
	}
	cout<<"sum= "<<s;
}
