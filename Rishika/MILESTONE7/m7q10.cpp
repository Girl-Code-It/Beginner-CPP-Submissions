//q10- wap to convert decimal to octal number system.
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int dec,oct[50],i=0,j=0;
	cout<<"Enter a decimal number = ";
	cin>>dec;
	while(dec!=0)
	{
		oct[i]=dec%8;
		dec=dec/8;
		i++;
	}
	cout<<"Converted into octal number system = ";
	for(j=i-1;j>=0;j--)
	{
		cout<<oct[j];
	}
}
