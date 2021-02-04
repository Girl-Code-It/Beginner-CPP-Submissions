//q1-wap to print the first and last digits of a number
#include<iostream>
using namespace std;
int main()
{
	int n,f,l;
	cout<<"Enter a number= ";
	cin>>n;
	l=n%10;
	f=n;
	while(f>10)
	{
		f=f/10;
	}
	cout<<"FIRST= "<<f<<endl;
	cout<<"LAST= "<<l;
}
