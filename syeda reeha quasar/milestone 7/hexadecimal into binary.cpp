#include<iostream>
#include<string.h>
using namespace std;
int main()
{   char hex[17], bin[65]="";
	int i=0;
	cout<<"enter any hexadecimal number:";
	gets(hex);
	cout<<"binary number is="<<"";
	for(i=0; hex[i]!='\0'; i++)
	{    	switch(hex[i])
		{	case'0':cout<<bin<<"0000";break;
			case'1':cout<<bin<<"0001";break;
			case'2':cout<<bin<<"0010";break;
			case'3':cout<<bin<<"0011";break;
			case'4':cout<<bin<<"0100";break;
			case'5':cout<<bin<<"0101";break;
			case'6':cout<<bin<<"0110";break;
			case'7':cout<<bin<<"0111";break;
			case'8':cout<<bin<<"1000";break;
			case'9':cout<<bin<<"1001";break;
			case'a':case'A':cout<<bin<<"1010";break;
			case'b':case'B':cout<<bin<<"1011";break;
			case'c':case'C':cout<<bin<<"1100";break;
			case'd':case'D':cout<<bin<<"1101"; break;
			case'e':case'E':cout<<bin<<"1110";break;
			case'f':case'F':cout<<bin<<"1111";break;
			default:cout<<"invalid hexadecimal input";}	}}
