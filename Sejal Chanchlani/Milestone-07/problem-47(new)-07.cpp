#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char mat[]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
	int r;
	int decimal,temp,index=0;
	cout<<"enter decimal number"<<endl;
	cin>>decimal;
	temp=decimal;
	char hexa[65];
	while(temp>0)
	{
		r=temp%16;
		hexa[index]=mat[r];
		index++;
		temp=temp/16;
	}
	hexa[index]='\0';
	strrev(hexa);
	cout<<"Hexadecimal - "<<hexa<<endl;
}
