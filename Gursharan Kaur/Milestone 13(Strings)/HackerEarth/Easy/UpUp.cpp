#include<iostream>
#include<cstring>
using namespace std;
int main()
{ 
	char s[30000];
	int i;
	gets(s);
	for(i=0;i<strlen(s);i++)
	{
		if (s[i] == ' ' && islower(s[i + 1]))
			s[i + 1] = toupper(s[i + 1]);
		if (islower(s[0])) 
			s[0] = toupper(s[0]);
	}
	puts(s);
}
