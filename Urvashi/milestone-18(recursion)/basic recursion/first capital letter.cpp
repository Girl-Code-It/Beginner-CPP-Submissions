#include <iostream>
#include <ctype.h>
#include <string.h>
using namespace std;
char capital(char *a)
{
	static int i = 0;
	if (i < strlen(a))
	{
		if (isupper(a[i]))
			return a[i];
		else
		{
			i = i + 1;
			return capital(a);
		}
	}
	return 0;
}
int main()
{
	char a[20];
	cin >> a;
	char iscapital = capital(a);
	if (iscapital == 0)
		cout << "no capital letter";
	else
		cout << "first capital leter is=" << iscapital;
}
