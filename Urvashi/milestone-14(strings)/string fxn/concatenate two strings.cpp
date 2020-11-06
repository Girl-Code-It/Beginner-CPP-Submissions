#include <iostream>
using namespace std;
int main()
{
	char s[20], s1[20], c[30];
	cout << "enter the string:";
	gets(s);
	cout << "enter the second string:";
	gets(s1);
	int i = 0, j = 0;
	while (s[i] != '\0')
	{
		c[j] = s[i];
		i++;
		j++;
	}
	i = 0;
	while (s1[i] != '\0')
	{
		c[j] = s1[i];
		i++;
		j++;
	}
	c[j] = '\0';
	cout << "concatenated string is= " << c;
}
