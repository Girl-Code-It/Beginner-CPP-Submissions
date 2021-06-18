//q7- wap to convert octal to decimal number system.
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int oct,temp,dec=0,i=0,n;
	cout<<"Enter an octal number = ";
	cin>>oct;
	temp=oct;
	while(temp!=0)
	{
		n=temp%10;
		temp=temp/10;
		dec=dec+n*pow(8,i);
		i++;
	}
	cout<<"Octal Number = "<<oct<<endl;
	cout<<"Converted into decimal number system = "<<dec;
}
