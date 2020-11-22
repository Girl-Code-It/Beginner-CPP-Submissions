//Write a C program to convert Octal to Binary number system.
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int octal,temp,dec=0,i=0,r;
	cout<<"enter octal number -"<<endl;
	cin>>octal;
	temp=octal;
	while(temp!=0)
	{
		r=temp%10;
		dec=dec+(r*pow(8,i));
		i++;
		temp=temp/10;
	}
	cout<<"octal number - "<<octal<<endl;
	cout<<"decimal number - "<<dec<<endl;
	
}
