// program to convert decimal into binary number.
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int decimal,temp,index=0;
	cout<<"enter decimal number"<<endl;
	cin>>decimal;
	temp=decimal;
	char binary[65];
	while(temp>0)
	{
		binary[index]=temp%2+'0';
		cout<<binary<<" ";
		temp=temp/2;
		index++;
	}
	cout<<endl;
	//binary[index] = '\0';
	strrev(binary);
	cout<<"binary number - "<<binary<<endl;
	
}
