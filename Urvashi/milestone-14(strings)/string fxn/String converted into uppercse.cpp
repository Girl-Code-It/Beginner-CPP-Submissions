#include<iostream>
#include<ctype.h>
using namespace std;
int main()
{
	char s[20];
	cout<<"enter the string:";
	gets(s);
	int i;
	cout<<"uppercase string is= ";
	for(i=0;s[i]!='\0';i++)
	{
		if(islower(s[i]))
		s[i]=toupper(s[i]);
	}
		cout<<s;
}
