#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	char s[20], s1[20];
	int i, j, x, t;
	cin >> t;
	while (t--)
	{
		cin >> s;

		for (int i = 0; i < strlen(s) / 2; i++)
		{
			if (s[i] != s[strlen(s) - i - 1])
				x = 0;
			else
				x = 1;
		}
		if (x != 1)
			cout << "NO" << endl;
		else
			cout << "YES" << endl;
	}
}
