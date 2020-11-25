// Program to convert decimal to octal.
#include<iostream>
using namespace std;
int main()
{
	int decimal,octal,temp,r,place=1;
	cout<<"enter decimal number"<<endl;
	cin>>decimal;
	temp=decimal;
	while(temp>0)
	{
		r=temp%8;
		octal=(place*r)+octal;
		place=place*10;
		temp=temp/8;
	}
	cout<<"octal number - "<<octal;
	
}
