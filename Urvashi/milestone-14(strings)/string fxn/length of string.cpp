#include <iostream>
using namespace std;
int main()
{
	char s[100];
	cout << "enter the string :" << endl;
	gets(s);
	int i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	cout << "length of string is:  " << i;
	return 0;
}
