//q3- wap to calculate factorial of  anumber.
#include<iostream>
using namespace std;
int main()
{
	int n,i,f=1;
	cout<<"Enter a number to calculate the factorial= ";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		f=f*i;
	}
	cout<<"Factorial of the number is= "<<f;
}
