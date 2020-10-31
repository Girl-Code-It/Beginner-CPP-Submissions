#include <iostream>
#include <ctype.h>
using namespace std;
int main()
{
	char s[20];
	cout << "enter the string:";
	gets(s);
	int i;
	cout << "lowercase string is= ";
	for (i = 0; s[i] != '\0'; i++)
	{
		if (isupper(s[i]))
			s[i] = tolower(s[i]);
	}
	cout << s;
}
