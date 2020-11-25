//Write a C program to convert Octal to Binary number system.
#include<iostream>
using namespace std;
int main()
{
	int mat[]={0,1,10,11,100,101,110,111};
	int octal,temp,rem,place=1;
	long long binary=0;
	cout<<"enter octal number - "<<endl;
	cin>>octal;
	temp=octal;
	while(temp!=0)
	{
		rem=temp%10;
		binary=(mat[rem]*place)+binary;
		temp=temp/10;
		place=place*1000;	
	}
	cout<<"binary - "<<binary;
	
}
